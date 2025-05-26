#ifndef MEMBER_REPOSITORY_H_
#define MEMBER_REPOSITORY_H_

#include <vector>
#include <string>
#include "member.h"

/**
 * @brief 회원 정보를 저장하고 검색하는 저장소 클래스
 */
class MemberRepository {
 public:
 /**
   * @brief 새 회원을 저장소에 추가
   */
  void AddMember(const Member& member);

  /**
   * @brief ID로 회원을 검색
   */
  Member* FindById(const std::string& id);

 private:
  std::vector<Member> members_; // 저장된 회원 목록
};

#endif  // MEMBER_REPOSITORY_H_