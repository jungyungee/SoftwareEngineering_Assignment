#ifndef MANAGER_H_
#define MANAGER_H_

#include "system_user.h"

// 회원가입 없이 시스템 초기화 시 자동 생성되는 관리자
class Manager : public SystemUser {
 public:
  Manager();
};

#endif  // MANAGER_H_