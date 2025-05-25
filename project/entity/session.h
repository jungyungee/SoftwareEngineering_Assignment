#ifndef SESSION_H_
#define SESSION_H_

#include "system_user.h"
#include "member.h"
#include "manager.h"

class Session {
 public:
  void Login(SystemUser* user) { logged_in_ = user; }
  void Logout() { logged_in_ = nullptr; }

  SystemUser* GetLoggedInUser() const { return logged_in_; }

  // 메니저인지 회원인지 구분 메서드
  bool IsMemberLoggedIn() const {
    return dynamic_cast<Member*>(logged_in_) != nullptr;
  }

  bool IsManagerLoggedIn() const {
    return dynamic_cast<Manager*>(logged_in_) != nullptr;
  }

  // Member 객체를 직접 반환
  Member* GetLoggedInMember() const {
    return dynamic_cast<Member*>(logged_in_);
  }

 private:
  SystemUser* logged_in_ = nullptr;
};

#endif  // SESSION_H_