#include "member_repository.h"

void MemberRepository::AddMember(const Member& member) {
  members_.push_back(member);
}

Member* MemberRepository::FindById(const std::string& id) {
  for (auto& member : members_) {
    if (member.GetId() == id) {
      return &member;
    }
  }
  return nullptr;
}