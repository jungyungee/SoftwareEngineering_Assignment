#include "logout.h"
#include <iostream>
#include <string>

// 로그아웃: 로그인된 사용자의 ID를 출력 후 세션 초기화
void LogoutControl::Logout(std::ostream& out) {
    SystemUser* user = session_.GetLoggedInUser();
    if (user) {
        out << "> " << user->GetId() << "\n" << std::endl;
    }
    session_.Logout();
}