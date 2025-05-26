#include "login_ui.h"

// 생성자
LoginUI::LoginUI(LoginControl* control) : control_(control) {}

// 로그인 인터페이스 실행
void LoginUI::start_interface(std::istream& in, std::ostream& out) {
	control_->Login(in, out);
}