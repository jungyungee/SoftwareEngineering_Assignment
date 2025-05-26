#include "bike.h"

// 생성자
Bike::Bike(const std::string& id, const std::string& bikename)
    : id_(id), bikename_(bikename), is_rented_(false) {
}

// 자전거 ID 반환
std::string Bike::GetId() const {
    return id_;
}

// 자전거 이름 반환
std::string Bike::GetBikeName() const {
    return bikename_;
}

// 대여 여부 확인
bool Bike::IsRented() const {
    return is_rented_;
}

// 자전거 대여 처리
void Bike::Rent() {
    is_rented_ = true;
}