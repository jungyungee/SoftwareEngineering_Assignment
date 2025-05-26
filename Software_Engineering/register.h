#pragma once
#ifndef REGISTER_CONTROL_H_
#define REGISTER_CONTROL_H_

#include <iostream>
#include "member.h"
#include "member_repository.h"

/**
 * @brief ȸ�� ������ ó���ϴ� control Ŭ����
 */
class Register {
public:
	/**
	 * @brief ������
	 */
	Register(MemberRepository& repo);

	/**
	 * @brief ȸ������: �Է� �޾� ȸ�� ���� �� ���� �� ���
	 */
	void RegisterMember(std::istream& in, std::ostream& out);

private:
	MemberRepository& repo_; // ȸ�� ����� ����
};

#endif  // REGISTER_CONTROL_H_