#pragma once
#ifndef RENTED_BIKE_CONTROL_H_
#define RENTED_BIKE_CONTROL_H_

#include <iostream>
#include "bike_repository.h"
#include "member_repository.h"
#include "session.h"

/**
 * @brief �뿩 ������ ��ȸ ����� ����ϴ� control Ŭ����
 */
class RentedBikeControl {
public:
	/**
	 * @brief ������
	 */
	RentedBikeControl(BikeRepository& bike_repo, MemberRepository& member_repo, Session& session);

	/**
	 * @brief ���� �α��ε� ȸ���� �뿩 ������ ����� ��ȯ
	 */
	std::vector<Bike*> GetRentedBikes();

private:
	BikeRepository& bike_repo_;       // ������ �����
	MemberRepository& member_repo_;   // ȸ�� �����
	Session& session_;                // ���� ����
};

#endif  // RENTED_BIKE_CONTROL_H_