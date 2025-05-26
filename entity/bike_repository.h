#ifndef BIKE_REPOSITORY_H_
#define BIKE_REPOSITORY_H_

#include <vector>
#include <string>
#include "bike.h"

/**
 * @brief 자전거 정보를 저장하고 검색하는 저장소 클래스
 */
class BikeRepository {
 public:
 /**
   * @brief 자전거를 저장소에 추가
   */
  void AddBike(const Bike& bike);

  /**
   * @brief ID로 자전거를 검색
   */
  Bike* FindById(const std::string& id);


  /**
   * @brief 전체 자전거 목록 반환
   */
  const std::vector<Bike>& GetAllBikes() const;

 private:
  std::vector<Bike> bikes_;   // 저장된 자전거 목록
};

#endif  // BIKE_REPOSITORY_H_