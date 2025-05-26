#include "register.h"

//������
Register::Register(MemberRepository& repo) : repo_(repo) {}

// �Է¹��� ������ ȸ���� �����ϰ� ����ҿ� �߰�, ��� ���
void Register::RegisterMember(std::istream& in, std::ostream& out) {
    std::string id, password, phone_number;
    in >> id >> password >> phone_number;

    Member new_member(id, password, phone_number);
    repo_.AddMember(new_member);

    out << "> " << new_member.GetId() << " "
        << new_member.GetPassword() << " "
        << new_member.GetPhoneNumber() << "\n"
        << std::endl;
}