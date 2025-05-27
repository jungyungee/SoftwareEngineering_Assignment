#pragma once
#ifndef BIKE_RENTAL_CONTROL_H_
#define BIKE_RENTAL_CONTROL_H_

#include "bike_repository.h"
#include "session.h"
#include "member.h"
#include "bike.h"

/**
 * @brief ������ �뿩�� ó���ϴ� control Ŭ����
 */

class BikeRentalControl {
public:
	/**
	 * @brief ������
	 */
	BikeRentalControl(BikeRepository& bike_repo, Session& session);

	/**
	 * @brief ������ �뿩 ó��: ���� �� Bike ������ ��ȯ, ���� �� nullptr
	 */
	Bike* RentBike(const std::string& bike_id);

private:
	BikeRepository& bike_repo_;   // ������ ����� ����
	Session& session_;            // ���� �α��� ���� ���� ����
};

#endif  // BIKE_RENTAL_CONTROL_H_