#include "member_repository.h"

// 회원 추가
void MemberRepository::AddMember(const Member& member) {
  members_.push_back(member);
}

// ID로 회원 검색
Member* MemberRepository::FindById(const std::string& id) {
  for (auto& member : members_) {
    if (member.GetId() == id) {
      return &member;
    }
  }
  return nullptr;
}