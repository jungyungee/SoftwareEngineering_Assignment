#include "logout_ui.h"

void LogoutUI::start_interface(std::ostream& out) {
  control_->Logout(out);
}