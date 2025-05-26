#include "bike_repository.h"

//자전거 추가
void BikeRepository::AddBike(const Bike& bike) {
    bikes_.push_back(bike);
}

//ID로 자전거 검색
Bike* BikeRepository::FindById(const std::string& id) {
    for (auto& bike : bikes_) {
        if (bike.GetId() == id) {
            return &bike;
        }
    }
    return nullptr;
}

//전체 자전거 목록 반환
const std::vector<Bike>& BikeRepository::GetAllBikes() const {
    return bikes_;
}