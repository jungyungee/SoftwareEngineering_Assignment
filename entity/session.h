#ifndef SESSION_H_
#define SESSION_H_

#include "system_user.h"
#include "member.h"
#include "manager.h"

/**
 * @brief 현재 로그인된 사용자의 정보를 저장하는 세션 클래스 (로그인, 로그아웃 구현)
 */
class Session {
 public:
 /**
   * @brief 로그인 처리
   */
  void Login(SystemUser* user) { logged_in_ = user; }
  /**
   * @brief 로그아웃 처리
   */
  void Logout() { logged_in_ = nullptr; }

  /**
   * @brief 현재 로그인된 사용자 반환
   */
  SystemUser* GetLoggedInUser() const { return logged_in_; }

  /**
   * @brief 현재 로그인된 사용자가 Member인지 확인
   * @return true면 Member
   */
  bool IsMemberLoggedIn() const {
    return dynamic_cast<Member*>(logged_in_) != nullptr;
  }

  /**
   * @brief 현재 로그인된 사용자가 Manager인지 확인
   * @return true면 Manager
   */
  bool IsManagerLoggedIn() const {
    return dynamic_cast<Manager*>(logged_in_) != nullptr;
  }

  /**
   * @brief 현재 로그인된 사용자를 Member 타입으로 반환
   * @return Member 포인터 (null일 수 있음)
   */
  Member* GetLoggedInMember() const {
    return dynamic_cast<Member*>(logged_in_);
  }

 private:
  SystemUser* logged_in_ = nullptr;   // 현재 로그인된 사용자 포인터
};

#endif  // SESSION_H_