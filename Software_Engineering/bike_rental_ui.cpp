#include "bike_rental_ui.h"

// ������
BikeRentalUI::BikeRentalUI(BikeRentalControl* control) : control_(control) {}

// �뿩 �������̽� ����
void BikeRentalUI::start_interface(std::istream& in, std::ostream& out) {
    std::string bike_id;
    in >> bike_id;

    Bike* bike = control_->RentBike(bike_id);
    if (bike) {
        out << "> " << bike->GetId() << " " << bike->GetBikeName() << "\n\n";
    }
    else {
        out << "> �뿩 ����\n\n";
    }
}