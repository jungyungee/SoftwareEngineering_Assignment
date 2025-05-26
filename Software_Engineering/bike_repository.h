#pragma once
#ifndef BIKE_REPOSITORY_H_
#define BIKE_REPOSITORY_H_

#include <vector>
#include <string>
#include "bike.h"

/**
 * @brief ������ ������ �����ϰ� �˻��ϴ� ����� Ŭ����
 */
class BikeRepository {
public:
	/**
	  * @brief �����Ÿ� ����ҿ� �߰�
	  */
	void AddBike(const Bike& bike);

	/**
	 * @brief ID�� �����Ÿ� �˻�
	 */
	Bike* FindById(const std::string& id);


	/**
	 * @brief ��ü ������ ��� ��ȯ
	 */
	const std::vector<Bike>& GetAllBikes() const;

private:
	std::vector<Bike> bikes_;   // ����� ������ ���
};

#endif  // BIKE_REPOSITORY_H_