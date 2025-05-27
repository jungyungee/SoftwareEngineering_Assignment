#pragma once
#ifndef ADD_BIKE_CONTROL_H_
#define ADD_BIKE_CONTROL_H_

#include "bike_repository.h"
#include "session.h"
#include "bike.h"


/**
 * @brief ������ ����� ó���ϴ� control Ŭ����
 */
class AddBikeControl {
public:
	/**
	  * @brief ������
	  */
	AddBikeControl(BikeRepository& bike_repo, Session& session);

	/**
	 * @brief �Է°� �ް� ���, ���� �� Bike ������ ��ȯ (�����ڸ�)
	 */
	Bike* AddBike(const std::string& id, const std::string& bikename);

private:
	BikeRepository& bike_repo_;   // ������ ����� ����
	Session& session_;            // ���� �α��� ���� ����
};

#endif  // ADD_BIKE_CONTROL_H_