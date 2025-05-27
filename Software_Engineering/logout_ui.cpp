#include "logout_ui.h"

// ������ ����
LogoutUI::LogoutUI(LogoutControl* control) : control_(control) {}

// GetId() ȣ�� �� ��� ������ ���� �α׾ƿ��ϴ� ����� ���� ���
void LogoutUI::start_interface(std::ostream& out) {
    SystemUser* user = control_->Logout();
    if (user) {
        out << "> " << user->GetId() << "\n\n";
    }
}