#include "bike_rental_ui.h"

// 대여 인터페이스 실행
void BikeRentalUI::start_interface(std::istream& in, std::ostream& out) {
  control_->RentBike(in, out);
}