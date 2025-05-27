#pragma once
#ifndef RENTED_BIKE_UI_H_
#define RENTED_BIKE_UI_H_

#include "rented_bike.h"
#include <iostream>

/**
 * @brief �뿩 ������ ��ȸ UI Ŭ����
 *        ������� �Է�/����� ó���ϰ� control class��
 */
class RentedBikeUI {
public:
	/**
	* @brief ������
	* @param control RentedBikeControl ��ü ������
	*/
	explicit RentedBikeUI(RentedBikeControl* control);

	/**
	 * @brief UI ���� �Լ�: ����� �Է��� �޾� control�� ����
	 */
	void start_interface(std::ostream& out);

private:
	RentedBikeControl* control_;  //control ���� ������
};

#endif  // RENTED_BIKE_UI_H_