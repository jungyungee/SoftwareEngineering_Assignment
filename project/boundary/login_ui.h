#ifndef LOGIN_UI_H_
#define LOGIN_UI_H_

#include "../control/login.h"
#include <iostream>

class LoginUI {
 public:
  LoginUI(LoginControl* control);
  void start_interface(std::istream& in, std::ostream& out);

 private:
  LoginControl* control_;
};

#endif  // LOGIN_UI_H_