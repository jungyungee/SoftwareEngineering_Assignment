#include "register_ui.h"

// UI 실행: 입력을 control에 전달하여 회원 등록 처리
void RegisterUI::start_interface(std::istream& in, std::ostream& out) {
  control_->RegisterMember(in, out);
}