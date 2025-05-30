﻿#include "add_bike.h"
#include "../entity/bike.h"
#include "../entity/manager.h"

#include <iostream>
#include <string>

// 생성자
AddBikeControl::AddBikeControl(BikeRepository& bike_repo, Session& session)
    : bike_repo_(bike_repo), session_(session) {}

// 자전거 등록-관리자만
void AddBikeControl::AddBike(std::istream& in, std::ostream& out) {
  std::string id, bikename;
  in >> id >> bikename;

  // 로그인된 사용자가 관리자일 경우에만 등록 가능
  SystemUser* user = session_.GetLoggedInUser();
  Manager* manager = dynamic_cast<Manager*>(user);
  if (manager == nullptr) {
    // 일반 유저면 등록 불가 -> 아무 출력 없이 무시
    return;
  }

  Bike new_bike(id, bikename);
  bike_repo_.AddBike(new_bike);
  out << "> " << id << " " << bikename << "\n\n";
}