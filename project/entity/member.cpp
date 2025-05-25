#include "member.h"

Member::Member(const string& id, const string& password, const string& phone_number)
    : SystemUser(id, password), phone_number_(phone_number) {}

string Member::GetPhoneNumber() const {
  return phone_number_;
}

void Member::AddToRentedList(const string& bike_id) {
  rented_bike_ids_.push_back(bike_id);
}

vector<string> Member::GetRentedList() const {
  return rented_bike_ids_;
}