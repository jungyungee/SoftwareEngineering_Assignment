#include "system_user.h"
#include <string> 

//생성자
SystemUser::SystemUser(const std::string& id, const std::string& password)
    : id_(id), password_(password) {}

//사용자 ID 반환
std::string SystemUser::GetId() const {
  return id_;
}

//사용자 비밀번호 반환
std::string SystemUser::GetPassword() const {
  return password_;
}

//세션 클리어 - 로그아웃 구현
void SystemUser::ClearSession() {
  id_.clear();
  password_.clear();
}