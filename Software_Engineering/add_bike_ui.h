#pragma once
#ifndef ADD_BIKE_UI_H_
#define ADD_BIKE_UI_H_

#include "add_bike.h"
#include <iostream>

/**
 * @brief 자전거 등록 UI 클래스
 *        입력을 받아 control에
 */
class AddBikeUI {
public:
	/**
	 * @brief 생성자
	 */
	explicit AddBikeUI(AddBikeControl* control);

	/**
	 * @brief 등록 메뉴 실행
	 */
	void start_interface(std::istream& in, std::ostream& out);

private:
	AddBikeControl* control_;  // control 계층 포인터
};

#endif  // ADD_BIKE_UI_H_