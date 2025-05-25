#ifndef SYSTEM_USER_H_
#define SYSTEM_USER_H_

#include <string>

using namespace std;

// 시스템 유저의 공통 기반 클래스
class SystemUser {
 public:
  SystemUser(const string& id, const string& password);
  virtual ~SystemUser() = default;

  string GetId() const;
  string GetPassword() const;
  void ClearSession();

 protected:
  string id_;
  string passwo