#include "bike_rental_ui.h"

// 생성자
BikeRentalUI::BikeRentalUI(BikeRentalControl* control) : control_(control) {}

// 대여 인터페이스 실행
void BikeRentalUI::start_interface(std::istream& in, std::ostream& out) {
    std::string bike_id;
    in >> bike_id;

    Bike* bike = control_->RentBike(bike_id);
    if (bike) {
        out << "> " << bike->GetId() << " " << bike->GetBikeName() << "\n\n";
    }
    else {
        out << "> 대여 실패\n\n";
    }
}