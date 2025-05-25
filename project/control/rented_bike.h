#ifndef RENTED_BIKE_CONTROL_H_
#define RENTED_BIKE_CONTROL_H_

#include <iostream>
#include "../entity/bike_repository.h"
#include "../entity/member_repository.h"
#include "../entity/session.h"

/**
 * @brief 대여 자전거 조회 기능을 담당하는 control 클래스
 */
class RentedBikeControl {
 public:
  /**
   * @brief 생성자
   */
  RentedBikeControl(BikeRepository& bike_repo, MemberRepository& member_repo, Session& session);

  /**
   * @brief 현재 로그인된 회원의 대여 자전거 목록 출력
   */
  void ShowRentedBikes(std::istream& in, std::ostream& out);

 private:
  BikeRepository& bike_repo_;       // 자전거 저장소
  MemberRepository& member_repo_;   // 회원 저장소
  Session& session_;                // 현재 세션
};

#endif  // RENTED_BIKE_CONTROL_H_