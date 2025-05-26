#pragma once
#ifndef BIKE_H_
#define BIKE_H_

#include <string>

/**
 * @brief 자전거 정보를 담는 클래스
 *        ID, 이름, 대여 여부를 포함
 */
class Bike {
public:
	/**
	  * @brief 자전거 생성자
	  */
	Bike(const std::string& id, const std::string& bikename);

	/**
	 * @brief 자전거 ID 반환
	 */
	std::string GetId() const;

	/**
	 * @brief 자전거 이름 반환
	 */
	std::string GetBikeName() const;

	/**
	 * @brief 대여 여부 확인
	 */
	bool IsRented() const;

	/**
	 * @brief 자전거 대여 처리
	 */
	void Rent();

private:
	std::string id_;          // 자전거 ID
	std::string bikename_;    // 자전거 이름
	bool is_rented_ = false;  // 대여 상태
};

#endif  // BIKE_H_