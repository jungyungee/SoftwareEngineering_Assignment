#include "login_ui.h"

// ������ ����
LoginUI::LoginUI(LoginControl* control) : control_(control) {}

// UI �������̽� ����: ����� �Է��� �޾� �α��� ó��
void LoginUI::start_interface(std::istream& in, std::ostream& out) {
    std::string id, password;
    in >> id >> password;

    if (in.fail()) {
        in.clear();
        std::string dummy;
        std::getline(in, dummy);  // �߸��� �Է� ����
        return;
    }

    SystemUser* user = control_->Login(id, password);
    if (user) {
        out << "> " << user->GetId() << " " << user->GetPassword() << "\n\n";
        return;
    }
}