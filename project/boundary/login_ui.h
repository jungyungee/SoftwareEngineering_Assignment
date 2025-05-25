#ifndef LOGIN_UI_H_
#define LOGIN_UI_H_

#include "../control/login.h"
#include <iostream>

/**
 * @brief 로그인 UI 클래스
 *        사용자 입력을 받아 control에 전달한다.
 */
class LoginUI {
 public:
  /**
   * @brief 생성자
   */
  explicit LoginUI(LoginControl* control);

  /**
   * @brief 로그인 UI 실행
   */
  void start_interface(std::istream& in, std::ostream& out);

 private:
  LoginControl* control_;  // control 계층 포인터
};

#endif  // LOGIN_UI_H_