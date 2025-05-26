#ifndef SYSTEM_USER_H_
#define SYSTEM_USER_H_

#include <string>

/**
 * @brief �ý��� �����(ȸ��/������) ���� Ŭ����
 */
class SystemUser {
public:
	/**
	 * @brief ������
	 */
	SystemUser(const std::string& id, const std::string& password);
	/**
	 * @brief ���� �Ҹ���
	 */
	virtual ~SystemUser() = default;

	/**
	 * @brief ����� ID ��ȯ
	 */
	std::string GetId() const;
	/**
	 * @brief ����� ��й�ȣ ��ȯ
	 */
	std::string GetPassword() const;
	/**
	 * @brief ���� ���� �ʱ�ȭ (ID/��й�ȣ ����)
	 */
	void ClearSession();

protected:
	std::string id_;        // ����� ID
	std::string password_;  // ����� ��й�ȣ
};

#endif  // SYSTEM_USER_H_