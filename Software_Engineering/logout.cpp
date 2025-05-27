#include "logout.h"
#include <iostream>
#include <string>

// ������
LogoutControl::LogoutControl(Session& session) : session_(session) {}

// �α׾ƿ� ��� ����
SystemUser* LogoutControl::Logout() {
    SystemUser* user = session_.GetLoggedInUser();
    session_.Logout();
    return user;
}