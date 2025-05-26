#include "logout_ui.h"

// 로그아웃 인터페이스 실행
void LogoutUI::start_interface(std::ostream& out) {
	control_->Logout(out);
}