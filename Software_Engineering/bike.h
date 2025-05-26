#pragma once
#ifndef BIKE_H_
#define BIKE_H_

#include <string>

/**
 * @brief ������ ������ ��� Ŭ����
 *        ID, �̸�, �뿩 ���θ� ����
 */
class Bike {
public:
	/**
	  * @brief ������ ������
	  */
	Bike(const std::string& id, const std::string& bikename);

	/**
	 * @brief ������ ID ��ȯ
	 */
	std::string GetId() const;

	/**
	 * @brief ������ �̸� ��ȯ
	 */
	std::string GetBikeName() const;

	/**
	 * @brief �뿩 ���� Ȯ��
	 */
	bool IsRented() const;

	/**
	 * @brief ������ �뿩 ó��
	 */
	void Rent();

private:
	std::string id_;          // ������ ID
	std::string bikename_;    // ������ �̸�
	bool is_rented_ = false;  // �뿩 ����
};

#endif  // BIKE_H_