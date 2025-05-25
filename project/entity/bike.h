// bike.h
#ifndef BIKE_H_
#define BIKE_H_

#include <string>

class Bike {
 public:
  Bike(const std::string& id, const std::string& bikename)
      : id_(id), bikename_(bikename) {}

  std::string GetId() const { return id_; }
  std::string Getbikename() const { return bikename_; }

 private:
  std::string id_;
  std::string bikename_;
};

#endif  // BIKE_H_