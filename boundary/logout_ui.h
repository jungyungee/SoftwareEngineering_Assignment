#ifndef LOGOUT_UI_H_
#define LOGOUT_UI_H_

#include "../control/logout.h"

/**
 * @brief 로그아웃 UI 클래스
 *        로그아웃 요청을 control에
 */
class LogoutUI {
 public:
 /**
   * @brief 생성자
   */
  explicit LogoutUI(LogoutControl* control) : control_(control) {}
  
  /**
   * @brief 로그아웃 UI 실행
   */
  void start_interface(std::ostream& out);

 private:
  LogoutControl* control_;  // control 포인터
};

#endif  // LOGOUT_UI_H_