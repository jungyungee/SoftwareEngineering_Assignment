#ifndef REGISTER_CONTROL_H_
#define REGISTER_CONTROL_H_

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
	 * @brief ȸ������: �Է� �޾� ȸ�� ���� �� ����
	 */
	Member* RegisterMember(const std::string& id, const std::string& pw, const std::string& phone);

private:
	MemberRepository& repo_; // ȸ�� ����� ����
};

#endif  // REGISTER_CONTROL_H_