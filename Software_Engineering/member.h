#pragma once
#ifndef MEMBER_H_
#define MEMBER_H_

#include <string>
#include <vector>
#include "system_user.h"

/**
 * @brief 일반 회원 클래스
 *        사용자 ID/비밀번호 외에 전화번호와 대여한 자전거 목록을 보관
 */
class Member : public SystemUser {
public:
	/**
	 * @brief Member 생성자
	 */
	Member(const std::string& id, const std::string& password, const std::string& phone_number);

	/**
	 * @brief 회원 전화번호 반환
	 */
	std::string GetPhoneNumber() const;

	/**
	 * @brief 자전거 ID를 대여 목록에 추가
	 */
	void AddToRentedList(const std::string& bike_id);

	/**
	 * @brief 현재 대여 중인 자전거 ID 목록 반환
	 */
	std::vector<std::string> GetRentedList() const;

private:
	std::string phone_number_;                  ///< 회원 전화번호
	std::vector<std::string> rented_bike_ids_;  ///< 대여 중인 자전거 ID 목록
};

#endif  // MEMBER_H_