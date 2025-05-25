// register.h
#ifndef REGISTER_CONTROL_H_
#define REGISTER_CONTROL_H_

#include <iostream>
#include <fstream>
#include "../entity/member.h"

// 클래스 이름을 Register로 정의
class Register {
 public:
  void RegisterMember(istream& in, ostream& out);
};

#endif  // REGISTER_CONTROL_H_