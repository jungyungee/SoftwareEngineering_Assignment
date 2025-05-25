#include "rented_bike.h"

#include <iostream>
#include <string>

RentedBikeControl::RentedBikeControl(BikeRepository& bike_repo, MemberRepository& member_repo, Session& session)
    : bike_repo_(bike_repo), member_repo_(member_repo), session_(session) {}

void RentedBikeControl::ShowRentedBikes(std::istream& in, std::ostream& out) {
  SystemUser* user = session_.GetLoggedInUser();
  Member* member = dynamic_cast<Member*>(user);
  
  if (!member) {
    return;
  }

  auto rented_list = member->GetRentedList();
  if (rented_list.empty()) {
    return;
  }

  for (const auto& bike_id : rented_list) {
    Bike* bike = bike_repo_.FindById(bike_id);
    if (bike) {
      out << "> " << bike->GetId() << " " << bike->GetBikeName() << "\n";
    }
  }
  out << "\n";
}