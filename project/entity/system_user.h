#ifndef SYSTEM_USER_H_
#define SYSTEM_USER_H_

#include <string>

/**
 * @brief 시스템 사용자(회원/관리자) 공통 클래스
 */
class SystemUser {
 public:
  /**
   * @brief 생성자
   */
  SystemUser(const std::string& id, const std::string& password);
  /**
   * @brief 가상 소멸자
   */
  virtual ~SystemUser() = default;

  /**
   * @brief 사용자 ID