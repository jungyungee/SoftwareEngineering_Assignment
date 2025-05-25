#include "logout.h"

#include <iostream>
#include <string>

void LogoutControl::Logout(std::ostream& out) {
  SystemUser* user = session_.GetLoggedInUser();
  if (user) {
    out << "> " << user->GetId() << "\n" << std::endl;
  }
  session_.Logout();
}