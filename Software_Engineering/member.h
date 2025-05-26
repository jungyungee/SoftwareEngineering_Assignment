#pragma once
#ifndef MEMBER_H_
#define MEMBER_H_

#include <string>
#include <vector>
#include "system_user.h"

/**
 * @brief �Ϲ� ȸ�� Ŭ����
 *        ����� ID/��й�ȣ �ܿ� ��ȭ��ȣ�� �뿩�� ������ ����� ����
 */
class Member : public SystemUser {
public:
	/**
	 * @brief Member ������
	 */
	Member(const std::string& id, const std::string& password, const std::string& phone_number);

	/**
	 * @brief ȸ�� ��ȭ��ȣ ��ȯ
	 */
	std::string GetPhoneNumber() const;

	/**
	 * @brief ������ ID�� �뿩 ��Ͽ� �߰�
	 */
	void AddToRentedList(const std::string& bike_id);

	/**
	 * @brief ���� �뿩 ���� ������ ID ��� ��ȯ
	 */
	std::vector<std::string> GetRentedList() const;

private:
	std::string phone_number_;                  ///< ȸ�� ��ȭ��ȣ
	std::vector<std::string> rented_bike_ids_;  ///< �뿩 ���� ������ ID ���
};

#endif  // MEMBER_H_