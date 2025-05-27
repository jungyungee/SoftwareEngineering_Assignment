#include "register.h"

//������
Register::Register(MemberRepository& repo) : repo_(repo) {}

// �Է¹��� ������ ȸ���� �����ϰ� ����ҿ� �߰�
Member* Register::RegisterMember(const std::string& id, const std::string& pw, const std::string& phone) {
    Member* new_member = new Member(id, pw, phone);
    repo_.AddMember(new_member);
    return new_member;
}