#pragma once
#ifndef MANAGER_H_
#define MANAGER_H_

#include "system_user.h"

/**
 * @brief 시스템 초기화 시 자동 생성되는 관리자 클래스
 *        별도 회원가입 없이 기본 계정(admin/admin)으로 생성
 */
class Manager : public SystemUser {
public:
	Manager();
};

#endif  // MANAGER_H_