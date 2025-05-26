#include "login.h"
#include "../entity/member.h"
#include <iostream>
#include <string>

//생성자
LoginControl::LoginControl(MemberRepository& repo, Session& session, Manager& manager)
    : repo_(repo), session_(session), manager_(manager) {}

// 입력된 ID와 비밀번호로 로그인 처리
void LoginControl::Login(std::istream& in, std::ostream& out) {
  std::string id, password;
  in >> id >> password;

  // 입력 실패
  if (in.fail()) {
    in.clear();
    std::string dummy;
    std::getline(in, dummy);
    return;
  }

  // 관리자 로그인 (admin, admin 인 경우만 고려한 하드코딩)
  if (id == "admin" && password == "admin") {
    session_.Login(&manager_);
    out << "> " << id << " " << password << "\n\n";
    return;
  }

  // 회원 로그인 처리
  Member* member = repo_.FindById(id);
  if (member && member->GetPassword() == password) {
    session_.Login(member);
    out << "> " << id << " " << password << "\n\n";
    return;
  }

  // 로그인 실패 시 아무 작업 없이 리턴
  return;
}