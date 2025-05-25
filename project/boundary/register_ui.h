#ifndef REGISTER_UI_H_
#define REGISTER_UI_H_

#include <iostream>
#include "../control/register.h"

using namespace std;

// RegisterUI 클래스는 회원가입 메뉴에 대한 UI 처리를 담당한다.
class RegisterUI {
 public:
  RegisterUI(Register* control) : control_(control) {}

  // 회원가입 메뉴 실행 함수
  void start_interface(istream& in, ostream& out);

 private:
  Register* control_;
};

#endif  // REGISTER_UI_H_