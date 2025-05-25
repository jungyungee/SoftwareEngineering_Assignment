#ifndef ADD_BIKE_CONTROL_H_
#define ADD_BIKE_CONTROL_H_

#include "../entity/bike_repository.h"
#include "../entity/session.h"

class AddBikeControl {
 public:
  AddBikeControl(BikeRepository& bike_repo, Session& session);
  void AddBike(std::istream& in, std::ostream& out);

 private:
  BikeRepository& bike_repo_;
  Session& session_;
};

#endif  // ADD_BIKE_CONTROL_H_