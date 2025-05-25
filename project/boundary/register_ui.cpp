// register_ui.cpp
#include "register_ui.h"

// 회원가입 인터페이스를 실행하여 Control을 통해 회원 등록을 수행한다.
void RegisterUI::start_interface(istream& in, ostream& out) {
  control_->RegisterMember(in, out);
}
