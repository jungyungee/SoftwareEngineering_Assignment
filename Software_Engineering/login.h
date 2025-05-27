#ifndef LOGIN_CONTROL_H_
#define LOGIN_CONTROL_H_

#include <string>
#include "member_repository.h"
#include "session.h"
#include "manager.h"
#include "system_user.h"

/**
 * @brief �α��� ó���� ����ϴ� control Ŭ����
 */
class LoginControl {
public:
	/**
	 * @brief ������
	 */
	LoginControl(MemberRepository& repo, Session& session, Manager& manager);

	/**
	 * @brief �Էµ� ID/��й�ȣ�� �α��� ó��
	 */
	SystemUser* Login(const std::string& id, const std::string& password);

private:
	MemberRepository& repo_;    // ȸ�� ����� ����
	Session& session_;          // �α��� ���� ����
	Manager& manager_;          // ������ ���� ����
};

#endif  // LOGIN_CONTROL_H_