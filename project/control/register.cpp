// register.cpp
#include "register.h"
#include "../entity/database.h"

// 회원 정보를 입력 받아 Member 객체를 생성하고 출력한다.
void Register::RegisterMember(istream& in, ostream& out) {
  string id, password, phone_number;
  in >> id >> password >> phone_number;

  Member new_member(id, password, phone_number);
  Database::GetInstance().AddMember(new_member);

  out << "> " << new_member.GetId() << " "
      << new_member.GetPassword() << " "
      << new_member.GetPhoneNumber() << endl;
}