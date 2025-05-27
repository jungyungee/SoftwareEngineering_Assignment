#pragma once
#ifndef REGISTER_UI_H_
#define REGISTER_UI_H_

#include <iostream>
#include "register.h"

/**
 * @brief ȸ������ UI Ŭ����
 *        ����� �Է��� �޾� control��
 */
class RegisterUI {
public:
	/**
	 * @brief ������
	 */
	explicit RegisterUI(Register* control);

	/**
	 * @brief UI ���� �Լ�: �Է��� �޾� ȸ������ ó��,������
	 */
	void start_interface(std::istream& in, std::ostream& out);

private:
	Register* control_;  // control ���� ������
};

#endif  // REGISTER_UI_H_