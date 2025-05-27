#include "logout.h"
#include <iostream>
#include <string>

// 생성자
LogoutControl::LogoutControl(Session& session) : session_(session) {}

// 로그아웃 기능 수행
SystemUser* LogoutControl::Logout() {
    SystemUser* user = session_.GetLoggedInUser();
    session_.Logout();
    return user;
}