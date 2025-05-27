#include "bike_rental.h"
#include "manager.h"

// 생성자
BikeRentalControl::BikeRentalControl(BikeRepository& bike_repo, Session& session)
    : bike_repo_(bike_repo), session_(session) {
}


// 자전거 대여: 대여 가능하면 대여 처리
Bike* BikeRentalControl::RentBike(const std::string& bike_id) {
    SystemUser* user = session_.GetLoggedInUser();
    Member* member = dynamic_cast<Member*>(user);

    if (!member) return nullptr;

    Bike* bike = bike_repo_.FindById(bike_id);
    if (!bike || bike->IsRented()) return nullptr;

    bike->Rent();
    member->AddToRentedList(bike_id);
    return bike;
}