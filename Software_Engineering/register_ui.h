#pragma once
#ifndef REGISTER_UI_H_
#define REGISTER_UI_H_

#include <iostream>
#include "register.h"

/**
 * @brief 회원가입 UI 클래스
 *        사용자 입력을 받아 control에
 */
class RegisterUI {
public:
	/**
	 * @brief 생성자
	 */
	explicit RegisterUI(Register* control);

	/**
	 * @brief UI 실행 함수: 입력을 받아 회원가입 처리,결과출력
	 */
	void start_interface(std::istream& in, std::ostream& out);

private:
	Register* control_;  // control 계층 포인터
};

#endif  // REGISTER_UI_H_