#pragma once
#ifndef ADD_BIKE_UI_H_
#define ADD_BIKE_UI_H_

#include "add_bike.h"
#include <iostream>

/**
 * @brief ������ ��� UI Ŭ����
 *        �Է��� �޾� control��
 */
class AddBikeUI {
public:
	/**
	 * @brief ������
	 */
	explicit AddBikeUI(AddBikeControl* control);

	/**
	 * @brief ��� �޴� ����
	 */
	void start_interface(std::istream& in, std::ostream& out);

private:
	AddBikeControl* control_;  // control ���� ������
};

#endif  // ADD_BIKE_UI_H_