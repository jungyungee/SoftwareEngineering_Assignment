#include "logout_ui.h"

// 생성자 정의
LogoutUI::LogoutUI(LogoutControl* control) : control_(control) {}

// GetId() 호출 및 출력 수행을 통한 로그아웃하는 사용자 정보 출력
void LogoutUI::start_interface(std::ostream& out) {
    SystemUser* user = control_->Logout();
    if (user) {
        out << "> " << user->GetId() << "\n\n";
    }
}