#include "logout.h"
#include <iostream>
#include <string>

// �α׾ƿ�: �α��ε� ������� ID�� ��� �� ���� �ʱ�ȭ
void LogoutControl::Logout(std::ostream& out) {
    SystemUser* user = session_.GetLoggedInUser();
    if (user) {
        out << "> " << user->GetId() << "\n" << std::endl;
    }
    session_.Logout();
}