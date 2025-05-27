#include "login_ui.h"

// 생성자 정의
LoginUI::LoginUI(LoginControl* control) : control_(control) {}

// UI 인터페이스 실행: 사용자 입력을 받아 로그인 처리
void LoginUI::start_interface(std::istream& in, std::ostream& out) {
    std::string id, password;
    in >> id >> password;

    if (in.fail()) {
        in.clear();
        std::string dummy;
        std::getline(in, dummy);  // 잘못된 입력 무시
        return;
    }

    SystemUser* user = control_->Login(id, password);
    if (user) {
        out << "> " << user->GetId() << " " << user->GetPassword() << "\n\n";
        return;
    }
}