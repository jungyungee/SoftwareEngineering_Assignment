#ifndef LOGOUT_UI_H_
#define LOGOUT_UI_H_

#include "../control/logout.h"

class LogoutUI {
 public:
  LogoutUI(LogoutControl* control) : control_(control) {}
  void start_interface(std::ostream& out);

 private:
  LogoutControl* control_;
};

#endif  // LOGOUT_UI_H_