#include "login.h"
#include "member.h"
#include <iostream>
#include <string>

//������
LoginControl::LoginControl(MemberRepository& repo, Session& session, Manager& manager)
    : repo_(repo), session_(session), manager_(manager) {
}

// �Էµ� ID�� ��й�ȣ�� �α��� ó��
SystemUser* LoginControl::Login(const std::string& id, const std::string& password) {
    // ������ �α��� (admin, admin �� ��츸 ����� �ϵ��ڵ�)
    if (id == "admin" && password == "admin") {
        session_.Login(&manager_);
        return &manager_;
    }

    // ȸ�� �α��� ó��
    Member* member = repo_.FindById(id);
    if (member && member->GetPassword() == password) {
        session_.Login(member);
        return member;
    }

    // �α��� ���� �� nullptr ��ȯ
    return nullptr;
}