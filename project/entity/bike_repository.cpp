#include "bike_repository.h"

void BikeRepository::AddBike(const Bike& bike) {
  bikes_.push_back(bike);
}

Bike* BikeRepository::FindById(const std::string& id) {
  for (auto& bike : bikes_) {
    if (bike.GetId() == id) {
      return &bike;
    }
  }
  return nullptr;
}

const std::vector<Bike>& BikeRepository::GetAllBikes() const {
  return bikes_;
}