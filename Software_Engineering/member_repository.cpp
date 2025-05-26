#include "member_repository.h"

// ȸ�� �߰�
void MemberRepository::AddMember(const Member& member) {
    members_.push_back(member);
}

// ID�� ȸ�� �˻�
Member* MemberRepository::FindById(const std::string& id) {
    for (auto& member : members_) {
        if (member.GetId() == id) {
            return &member;
        }
    }
    return nullptr;
}