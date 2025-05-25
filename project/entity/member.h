#ifndef MEMBER_H_
#define MEMBER_H_

#include <string>
#include <vector>
#include "system_user.h"

/**
 * @brief 일반 회원 클래스
 *        사용자 ID/비밀번호 외에 전화번호와 대여한 자전거 목록을 보관
 */
class Member : public SystemUser {
 public:
  /**
   * @brief Member 생성자
   */
  Member(const std::string& id, const std::string& password, const std::string& phone_number);

  /**
   * @brief 회원 전화번호 반환
   */
  std::string GetPhoneNumber() const;

  /**
   * @bri