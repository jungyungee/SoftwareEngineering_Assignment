#include "bike_rental_ui.h"

// �뿩 �������̽� ����
void BikeRentalUI::start_interface(std::istream& in, std::ostream& out) {
	control_->RentBike(in, out);
}