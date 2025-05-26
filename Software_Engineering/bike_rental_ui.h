#pragma once
#ifndef BIKE_RENTAL_UI_H_
#define BIKE_RENTAL_UI_H_

#include "bike_rental.h"
#include <iostream>

/**
 * @brief ������ �뿩 UI Ŭ����
 *        ����� �Է��� �޾� control��
 */
class BikeRentalUI {
public:
	/**
	 * @brief ������
	 */
	explicit BikeRentalUI(BikeRentalControl* control) : control_(control) {}

	/**
	 * @brief �뿩 �޴� ����
	 */
	void start_interface(std::istream& in, std::ostream& out);

private:
	BikeRentalControl* control_;  // control ���� ������
};

#endif  // BIKE_RENTAL_UI_H_