#ifndef ADD_BIKE_UI_H_
#define ADD_BIKE_UI_H_

#include "../control/add_bike.h"
#include <iostream>

class AddBikeUI {
 public:
  AddBikeUI(AddBikeControl* control);  // 선언만
  void start_interface(std::istream& in, std::ostream& out);  // 선언만

 private:
  AddBikeControl* control_;
};

#endif  // ADD_BIKE_UI_H_