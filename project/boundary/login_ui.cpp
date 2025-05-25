#include "login_ui.h"

LoginUI::LoginUI(LoginControl* control) : control_(control) {}

void LoginUI::start_interface(std::istream& in, std::ostream& out) {
  control_->Login(in, out);
}