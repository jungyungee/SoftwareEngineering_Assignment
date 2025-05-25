#ifndef MEMBER_H_
#define MEMBER_H_

#include "system_user.h"
#include <string>
#include <vector>

class Member : public SystemUser {
 public:
  Member(const string& id, const string& password, const string& phone_number);

  string GetPhoneNumber() const;
  
  void AddToRentedList(const string& bike_id);
  vector<string> GetRentedList() const;

 private:
  string phone_number_;
  vector<string> rented_bike_ids_;
};

#endif  // MEMBER_H_
