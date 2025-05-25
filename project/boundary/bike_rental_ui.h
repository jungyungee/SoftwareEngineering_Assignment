#ifndef BIKE_RENTAL_UI_H_
#define BIKE_RENTAL_UI_H_

#include "../control/bike_rental.h"
#include <iostream>

class BikeRentalUI {
 public:
  BikeRentalUI(BikeRentalControl* control) : control_(control) {}
  void start_interface(std::istream& in, std::ostream& out);

 private:
  BikeRentalControl* control_;
};

#endif  // BIKE_RENTAL_UI_H_