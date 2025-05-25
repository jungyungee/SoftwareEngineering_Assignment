#include "bike.h"

Bike::Bike(const std::string& id, const std::string& model, const std::string& type)
    : id_(id), model_(model), type_(type), status_("사용 가능") {}

std::string Bike::GetId() const {
  return id_;
}

std::string Bike::GetModel() const {
  return model_;
}

std::string Bike::GetType() const {
  return type_;
}

std::string Bike::GetStatus() const {
  return status_;
}

void Bike::SetStatus(const std::string& status) {
  status_ = status;
}

bool Bike::IsAvailable() const {
  return status_ == "사용 가능";
}