#include "system_user.h"
#include <string> 

//생성자
SystemUser::SystemUser(const std::string& id, const std::string& password)
    : id_(id), password_(password) {}

std::string SystemUser::GetId() const {
  return id_;
}

std::string SystemUser::GetPassword() const {
  return password_;
}

void SystemUser::Clea