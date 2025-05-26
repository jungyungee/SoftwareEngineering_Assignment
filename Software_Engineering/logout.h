#ifndef LOGOUT_CONTROL_H_
#define LOGOUT_CONTROL_H_

#include "session.h"

/**
 * @brief �α׾ƿ� ó���� ����ϴ� control Ŭ����
 */
class LogoutControl {
public:
	/**
	  * @brief ������
	  */
	LogoutControl(Session& session) : session_(session) {}

	/**
	 * @brief ���� �α��ε� ����ڸ� �α׾ƿ� ó��
	 */
	void Logout(std::ostream& out);

private:
	Session& session_; //�α��� ���� �̿�
};

#endif  // LOGOUT_CONTROL_H_