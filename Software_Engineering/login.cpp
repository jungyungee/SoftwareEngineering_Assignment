#include "login.h"
#include "member.h"
#include <iostream>
#include <string>

//생성자
LoginControl::LoginControl(MemberRepository& repo, Session& session, Manager& manager)
    : repo_(repo), session_(session), manager_(manager) {
}

// 입력된 ID와 비밀번호로 로그인 처리
SystemUser* LoginControl::Login(const std::string& id, const std::string& password) {
    // 관리자 로그인 (admin, admin 인 경우만 고려한 하드코딩)
    if (id == "admin" && password == "admin") {
        session_.Login(&manager_);
        return &manager_;
    }

    // 회원 로그인 처리
    Member* member = repo_.FindById(id);
    if (member && member->GetPassword() == password) {
        session_.Login(member);
        return member;
    }

    // 로그인 실패 시 nullptr 반환
    return nullptr;
}