#ifndef LOGIN_CONTROL_H_
#define LOGIN_CONTROL_H_

#include "../entity/member_repository.h"
#include "../entity/session.h"
#include "../entity/manager.h"

/**
 * @brief 로그인 처리를 담당하는 control 클래스
 */
class LoginControl {
 public:
  /**
   * @brief 생성자
   * @param repo 회원 저장소
   * @param session 현재 세션
   * @param manager 관리자 객체 참조
   */
  LoginControl(MemberRepository& repo, Session& session, Manager& manager);
  
  /**
   * @brief 입력된 ID/비밀번호로 로그인 처리
   */
  void Login(std::istream& in, std::ostream& out);

 private:
  MemberRepository& repo_;    // 회원 저장소 참조
  Session& session_;          // 로그인 세션 참조
  Manager& manager_;          // 관리자 계정 참조
};

#endif  // LOGIN_CONTROL_H_