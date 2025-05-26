#include "member.h"
#include <string>
#include <vector>

// 생성자
Member::Member(const std::string& id, const std::string& password, const std::string& phone_number)
    : SystemUser(id, password), phone_number_(phone_number) {}

// 전화번호 반환
std::string Member::GetPhoneNumber() const {
  return phone_number_;
}

// 자전거 ID 추가
void Member::AddToRentedList(const std::string& bike_id) {
  rented_bike_ids_.push_back(bike_id);
}

// 대여 자전거 목록 반환
std::vector<std::string> Member::GetRentedList() const {
  return rented_bike_ids_;
}