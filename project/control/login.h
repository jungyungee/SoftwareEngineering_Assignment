#ifndef LOGIN_CONTROL_H_
#define LOGIN_CONTROL_H_

#include "../entity/member_repository.h"
#include "../entity/session.h"
#include "../entity/manager.h"

class LoginControl {
 public:
  LoginControl(MemberRepository& repo, Session& session, Manager& manager);
  void Login(std::istream& in, std::ostream& out);

 private:
  MemberRepository& repo_;
  Session& session_;
  Manager& manager_;
};

#endif  // LOGIN_CONTROL_H_