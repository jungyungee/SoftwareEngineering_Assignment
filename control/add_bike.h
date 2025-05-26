#ifndef ADD_BIKE_CONTROL_H_
#define ADD_BIKE_CONTROL_H_

#include "../entity/bike_repository.h"
#include "../entity/session.h"


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
   * @brief 자전거 등록 처리 (관리자만)
   */
  void AddBike(std::istream& in, std::ostream& out);

 private:
  BikeRepository& bike_repo_;   // 자전거 저장소 참조
  Session& session_;            // 현재 로그인 세션 참조
};

#endif  // ADD_BIKE_CONTROL_H_