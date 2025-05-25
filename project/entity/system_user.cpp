#include "system_user.h"

SystemUser::SystemUser(const string& id, const string& password)
    : id_(id), password_(password) {}

string SystemUser::GetId() const {
  return id_;
}

string SystemUser::GetPassword() const {
  return password_;
}

void SystemUser::ClearSession() {
  id_.clear();
  password_.clear();
}