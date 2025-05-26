#include "system_user.h"
#include <string> 

//������
SystemUser::SystemUser(const std::string& id, const std::string& password)
    : id_(id), password_(password) {
}

//����� ID ��ȯ
std::string SystemUser::GetId() const {
    return id_;
}

//����� ��й�ȣ ��ȯ
std::string SystemUser::GetPassword() const {
    return password_;
}

//���� Ŭ���� - �α׾ƿ� ����
void SystemUser::ClearSession() {
    id_.clear();
    password_.clear();
}