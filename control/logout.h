#ifndef LOGOUT_CONTROL_H_
#define LOGOUT_CONTROL_H_

#include "../entity/session.h"

/**
 * @brief 로그아웃 처리를 담당하는 control 클래스
 */
class LogoutControl {
 public:
 /**
   * @brief 생성자
   */
  LogoutControl(Session& session) : session_(session) {}
  
  /**
   * @brief 현재 로그인된 사용자를 로그아웃 처리
   */
  void Logout(std::ostream& out);

 private:
  Session& session_; //로그인 세션 이용
};

#endif  // LOGOUT_CONTROL_H_