#pragma once
#ifndef REGISTER_CONTROL_H_
#define REGISTER_CONTROL_H_

#include <iostream>
#include "member.h"
#include "member_repository.h"

/**
 * @brief 회원 가입을 처리하는 control 클래스
 */
class Register {
public:
	/**
	 * @brief 생성자
	 */
	Register(MemberRepository& repo);

	/**
	 * @brief 회원가입: 입력 받아 회원 생성 후 저장 및 출력
	 */
	void RegisterMember(std::istream& in, std::ostream& out);

private:
	MemberRepository& repo_; // 회원 저장소 참조
};

#endif  // REGISTER_CONTROL_H_