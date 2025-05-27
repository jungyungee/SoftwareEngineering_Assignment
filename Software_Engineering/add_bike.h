#pragma once
#ifndef ADD_BIKE_CONTROL_H_
#define ADD_BIKE_CONTROL_H_

#include "bike_repository.h"
#include "session.h"
#include "bike.h"


/**
 * @brief 자전거 등록을 처리하는 control 클래스
 */
class AddBikeControl {
public:
	/**
	  * @brief 생성자
	  */
	AddBikeControl(BikeRepository& bike_repo, Session& session);

	/**
	 * @brief 입력값 받고 등록, 성공 시 Bike 포인터 반환 (관리자만)
	 */
	Bike* AddBike(const std::string& id, const std::string& bikename);

private:
	BikeRepository& bike_repo_;   // 자전거 저장소 참조
	Session& session_;            // 현재 로그인 세션 참조
};

#endif  // ADD_BIKE_CONTROL_H_