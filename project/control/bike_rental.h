#ifndef BIKE_RENTAL_CONTROL_H_
#define BIKE_RENTAL_CONTROL_H_

#include "../entity/bike_repository.h"
#include "../entity/session.h"
#include "../entity/member.h"

class BikeRentalControl {
 public:
  BikeRentalControl(BikeRepository& bike_repo, Session& session);
  void RentBike(std::istream& in, std::ostream& out);

 private:
  BikeRepository& bike_repo_;
  Session& session_;
};

#endif  // BIKE_RENTAL_CONTROL_H_