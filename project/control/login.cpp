#include "login.h"
#include "../entity/member.h"

#include <iostream>
#include <string>

LoginControl::LoginControl(MemberRepository& repo, Session& session, Manager& manager)
    : repo_(repo), session_(session), manager_(manager) {}

void LoginControl::Login(std::istream& in, std::ostream& out) {
  std::string id, password;
  in >> id >> password;

  if (id == "admin" && password == "admin") {
    session_.Login(&manager_);
    out << "> " << id << " " << password << "\n";
    return;
  }

  Member* member = repo_.FindById(id);
  if (member && member->GetPassword() == password) {
    session_.Login(member);
    out << "> " << id << " " << password << "\n";
  }
}