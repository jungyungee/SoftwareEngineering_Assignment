#pragma once
#ifndef LOGIN_CONTROL_H_
#define LOGIN_CONTROL_H_

#include "member_repository.h"
#include "session.h"
#include "manager.h"

/**
 * @brief �α��� ó���� ����ϴ� control Ŭ����
 */
class LoginControl {
public:
	/**
	 * @brief ������
	 * @param repo ȸ�� �����
	 * @param session ���� ����
	 * @param manager ������ ��ü ����
	 */
	LoginControl(MemberRepository& repo, Session& session, Manager& manager);

	/**
	 * @brief �Էµ� ID/��й�ȣ�� �α��� ó��
	 */
	void Login(std::istream& in, std::ostream& out);

private:
	MemberRepository& repo_;    // ȸ�� ����� ����
	Session& session_;          // �α��� ���� ����
	Manager& manager_;          // ������ ���� ����
};

#endif  // LOGIN_CONTROL_H_