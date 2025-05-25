#include "login.h"
#include "../entity/member.h"

#include <iostream>
#include <string>

LoginControl::LoginControl(MemberRepository& repo, Session& session, Manager& manager)
    : repo_(repo), session_(session), manager_(manager) {}

void LoginControl::Login(std::istream& in, std::ostream& out) {
  std::string id, password;
  in >> id >> password;

  if (in.fail()) {
    in.clear();
    std::string dummy;
    std::getline(in, dummy);
    return;
  }

  if (id == "admin" && password == "admin") {
    session_.Login(&manager_);
    out << "> " << id << " " << password << "\n\n";
    return;
  }

  Member* member = repo_.FindById(id);
  if (member && member->GetPassword() == password) {
    session_.Login(member);
    out << "> " << id << " " << password << "\n\n";
    return;
  }
  return;
}