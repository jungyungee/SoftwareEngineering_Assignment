#pragma once
#ifndef MANAGER_H_
#define MANAGER_H_

#include "system_user.h"

/**
 * @brief �ý��� �ʱ�ȭ �� �ڵ� �����Ǵ� ������ Ŭ����
 *        ���� ȸ������ ���� �⺻ ����(admin/admin)���� ����
 */
class Manager : public SystemUser {
public:
	Manager();
};

#endif  // MANAGER_H_