#ifndef MEMBER_REPOSITORY_H_
#define MEMBER_REPOSITORY_H_

#include <vector>
#include <string>
#include "member.h"

class MemberRepository {
 public:
  void AddMember(const Member& member);
  Member* FindById(const std::string& id);

 private:
  std::vector<Member> members_;
};

#endif