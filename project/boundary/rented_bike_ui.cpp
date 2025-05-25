#include "rented_bike_ui.h"

RentedBikeUI::RentedBikeUI(RentedBikeControl* control) : control_(control) {}

void RentedBikeUI::start_interface(std::istream& in, std::ostream& out) {
  control_->ShowRentedBikes(in, out);
}