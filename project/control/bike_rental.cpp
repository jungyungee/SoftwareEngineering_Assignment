#include "bike_rental.h"

#include <iostream>
#include <string>

BikeRentalControl::BikeRentalControl(BikeRepository& bike_repo, Session& session)
    : bike_repo_(bike_repo), session_(session) {}

void BikeRentalControl::RentBike(std::istream& in, std::ostream& out) {
  SystemUser* user = session_.GetLoggedInUser();
  Member* member = dynamic_cast<Member*>(user);

  std::string bike_id;
  in >> bike_id;
  
  if (!member) return;  // 관리자거나 로그인 안한 경우 리턴

  Bike* bike = bike_repo_.FindById(bike_id);
  if (!bike || bike->IsRented()) return;  // 없거나 이미 대여 중이면 무시

  bike->Rent();
  member->AddToRentedList(bike_id);

  out << "> " << bike->GetId() << " " << bike->GetBikeName() << "\n";
}