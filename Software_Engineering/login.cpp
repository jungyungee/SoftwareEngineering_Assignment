#include "login.h"
#include "member.h"
#include <iostream>
#include <string>

//������
LoginControl::LoginControl(MemberRepository& repo, Session& session, Manager& manager)
    : repo_(repo), session_(session), manager_(manager) {
}

// �Էµ� ID�� ��й�ȣ�� �α��� ó��
void LoginControl::Login(std::istream& in, std::ostream& out) {
    std::string id, password;
    in >> id >> password;

    // �Է� ����
    if (in.fail()) {
        in.clear();
        std::string dummy;
        std::getline(in, dummy);
        return;
    }

    // ������ �α��� (admin, admin �� ��츸 ����� �ϵ��ڵ�)
    if (id == "admin" && password == "admin") {
        session_.Login(&manager_);
        out << "> " << id << " " << password << "\n\n";
        return;
    }

    // ȸ�� �α��� ó��
    Member* member = repo_.FindById(id);
    if (member && member->GetPassword() == password) {
        session_.Login(member);
        out << "> " << id << " " << password << "\n\n";
        return;
    }

    // �α��� ���� �� �ƹ� �۾� ���� ����
    return;
}