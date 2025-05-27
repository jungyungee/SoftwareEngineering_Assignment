#ifndef LOGOUT_CONTROL_H_
#define LOGOUT_CONTROL_H_

#include "session.h"
#include "system_user.h"

/**
 * @brief �α׾ƿ� ó���� ����ϴ� control Ŭ����
 */
class LogoutControl {
public:
	/**
	  * @brief ������
	  */
	explicit LogoutControl(Session& session);

	/**
	 * @brief ���� �α��ε� ����ڸ� �α׾ƿ� ó��
	 */
	SystemUser* Logout();

private:
	Session& session_; //�α��� ���� �̿�
};

#endif  // LOGOUT_CONTROL_H_