#include "add_bike_ui.h"

AddBikeUI::AddBikeUI(AddBikeControl* control) : control_(control) {}

void AddBikeUI::start_interface(std::istream& in, std::ostream& out) {
  control_->AddBike(in, out);
}