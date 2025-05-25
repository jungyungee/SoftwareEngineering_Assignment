#ifndef LOGOUT_CONTROL_H_
#define LOGOUT_CONTROL_H_

#include "../entity/session.h"

class LogoutControl {
 public:
  LogoutControl(Session& session) : session_(session) {}
  void Logout(std::ostream& out);

 private:
  Session& session_;
};

#endif  // LOGOUT_CONTROL_H_