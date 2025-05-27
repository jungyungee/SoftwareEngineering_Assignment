#ifndef MEMBER_REPOSITORY_H_
#define MEMBER_REPOSITORY_H_

#include <vector>
#include <string>
#include "member.h"

/**
 * @brief ȸ�� ������ �����ϰ� �˻��ϴ� ����� Ŭ����
 */
class MemberRepository {
public:
	/**
	  * @brief �� ȸ���� ����ҿ� �߰�
	  */
	void AddMember(Member* member);

	/**
	 * @brief ID�� ȸ���� �˻�
	 */
	Member* FindById(const std::string& id);

private:
	std::vector<Member*> members_; // ����� ȸ�� ���
};

#endif  // MEMBER_REPOSITORY_H_