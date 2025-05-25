#ifndef ADD_BIKE_UI_H_
#define ADD_BIKE_UI_H_

#include "../control/add_bike.h"

class AddBikeUI {
 public:
  AddBikeUI(AddBikeControl* control) : control_(control) {}

  void start_interface(std::istream& in, std::ostream& out) {
    control_->AddBike(in, out);
  }

 private:
  AddBikeControl* control_;
};

#endif  // ADD_BIKE_UI_H_