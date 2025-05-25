#ifndef BIKE_REPOSITORY_H_
#define BIKE_REPOSITORY_H_

#include <vector>
#include <string>
#include "bike.h"

class BikeRepository {
 public:
  void AddBike(const Bike& bike);
  Bike* FindById(const std::string& id);
  const std::vector<Bike>& GetAllBikes() const;

 private:
  std::vector<Bike> bikes_;
};

#endif  // BIKE_REPOSITORY_H_