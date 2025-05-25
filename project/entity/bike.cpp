#include "bike.h"

Bike::Bike(const std::string& id, const std::string& bikename)
    : id_(id), bikename_(bikename), is_rented_(false) {}

std::string Bike::GetId() const {
  return id_;
}

std::string Bike::GetBikeName() const {
  return bikename_;
}

bool Bike::IsRented() const {
  return is_rented_;
}

void Bike::Rent() {
  is_rented_ = true;
}