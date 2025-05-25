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
  void Login(