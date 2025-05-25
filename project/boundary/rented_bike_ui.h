#ifndef RENTED_BIKE_UI_H_
#define RENTED_BIKE_UI_H_

#include "../control/rented_bike.h"
#include <iostream>

class RentedBikeUI {
 public:
  explicit RentedBikeUI(RentedBikeControl* control);
  void start_interface(std::istream& in, std::ostream& out);

 private:
  RentedBikeControl* control_;
};

#endif  // RENTED_BIKE_UI_H_