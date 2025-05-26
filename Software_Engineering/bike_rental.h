#pragma once
#ifndef BIKE_RENTAL_CONTROL_H_
#define BIKE_RENTAL_CONTROL_H_

#include "bike_repository.h"
#include "session.h"
#include "member.h"

/**
 * @brief 자전거 대여를 처리하는 control 클래스
 */

class BikeRentalControl {
public:
	/**
	 * @brief 생성자
	 */
	BikeRentalControl(BikeRepository& bike_repo, Session& session);

	/**
	 * @brief 자전거 대여 처리: 입력받은 ID로 대여 가능 여부 확인 후 대여
	 */
	void RentBike(std::istream& in, std::ostream& out);

private:
	BikeRepository& bike_repo_;   // 자전거 저장소 참조
	Session& session_;            // 현재 로그인 중인 세션 참조
};

#endif  // BIKE_RENTAL_CONTROL_H_