#include "bike_rental.h"
#include <iostream>
#include <string>

// 생성자
BikeRentalControl::BikeRentalControl(BikeRepository& bike_repo, Session& session)
    : bike_repo_(bike_repo), session_(session) {
}


// 자전거 ID 입력 → 대여 가능하면 대여 처리
void BikeRentalControl::RentBike(std::istream& in, std::ostream& out) {
    SystemUser* user = session_.GetLoggedInUser();
    Member* member = dynamic_cast<Member*>(user);

    std::string bike_id;
    in >> bike_id;

    // 로그인 중이 아니거나 일반 회원이 아니면 종료
    if (!member) return;

    // 자전거가 없거나 이미 대여 중이면 종료
    Bike* bike = bike_repo_.FindById(bike_id);
    if (!bike || bike->IsRented()) return;

    //대여
    bike->Rent();
    member->AddToRentedList(bike_id);

    out << "> " << bike->GetId() << " " << bike->GetBikeName() << "\n\n";
}