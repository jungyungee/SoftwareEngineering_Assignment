#ifndef BIKE_H_
#define BIKE_H_

#include <string>

class Bike {
 public:
  Bike(const std::string& id, const std::string& bikename);

  std::string GetId() const;
  std::string GetBikeName() const;
  bool IsRented() const;
  void Rent();

 private:
  std::string id_;
  std::string bikename_;
  bool is_rented_ = false;
};

#endif  // BIKE_H_