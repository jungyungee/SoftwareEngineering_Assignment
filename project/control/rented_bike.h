#ifndef RENTED_BIKE_CONTROL_H_
#define RENTED_BIKE_CONTROL_H_

#include "../entity/bike_repository.h"
#include "../entity/member_repository.h"
#include "../entity/session.h"

class RentedBikeControl {
 public:
  RentedBikeControl(BikeRepository& bike_repo, MemberRepository& member_repo, Session& session);
  void ShowRentedBikes(std::istream& in, std::ostream& out);

 private:
  BikeRepository& bike_repo_;
  MemberRepository& member_repo_;
  Session& session_;
};

#endif  // RENTED_BIKE_CONTROL_H_