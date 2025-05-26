#include "register.h"

//생성자
Register::Register(MemberRepository& repo) : repo_(repo) {}

// 입력받은 정보로 회원을 생성하고 저장소에 추가, 결과 출력
void Register::RegisterMember(std::istream& in, std::ostream& out) {
  std::string id, password, phone_number;
  in >> id >> password >> phone_number;

  Member new_member(id, password, phone_number);
  repo_.AddMember(new_member);

  out << "> " << new_member.GetId() << " "
      << new_member.GetPassword() << " "
      << new_member.GetPhoneNumber() << "\n" 
      << std::endl;
}