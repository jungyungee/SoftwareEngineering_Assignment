#pragma once
#ifndef RENTED_BIKE_UI_H_
#define RENTED_BIKE_UI_H_

#include "rented_bike.h"
#include <iostream>

/**
 * @brief 대여 자전거 조회 UI 클래스
 *        사용자의 입력/출력을 처리하고 control class에
 */
class RentedBikeUI {
public:
	/**
	* @brief 생성자
	* @param control RentedBikeControl 객체 포인터
	*/
	explicit RentedBikeUI(RentedBikeControl* control);

	/**
	 * @brief UI 실행 함수: 사용자 입력을 받아 control에 전달
	 */
	void start_interface(std::ostream& out);

private:
	RentedBikeControl* control_;  //control 참조 포인터
};

#endif  // RENTED_BIKE_UI_H_