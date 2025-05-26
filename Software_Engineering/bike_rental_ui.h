#pragma once
#ifndef BIKE_RENTAL_UI_H_
#define BIKE_RENTAL_UI_H_

#include "bike_rental.h"
#include <iostream>

/**
 * @brief 자전거 대여 UI 클래스
 *        사용자 입력을 받아 control에
 */
class BikeRentalUI {
public:
	/**
	 * @brief 생성자
	 */
	explicit BikeRentalUI(BikeRentalControl* control) : control_(control) {}

	/**
	 * @brief 대여 메뉴 실행
	 */
	void start_interface(std::istream& in, std::ostream& out);

private:
	BikeRentalControl* control_;  // control 계층 포인터
};

#endif  // BIKE_RENTAL_UI_H_