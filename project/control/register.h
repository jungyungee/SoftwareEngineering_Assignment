// register.h
#ifndef REGISTER_CONTROL_H_
#define REGISTER_CONTROL_H_

#include <iostream>
#include "../entity/member.h"
#include "../entity/member_repository.h"

// 클래스 이름을 Register로 정의
class Register {
 public:
  Register(MemberRepository& repo);  // 생성자에서 repository 주입
  void RegisterMember(std::istream& in, std::ostream& out);

 private:
  MemberRepository& repo_;  // DB 대신 MemberRepository 참조
};

#endif  // REGISTER_CONTROL_H_