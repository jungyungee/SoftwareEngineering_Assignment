#include "member.h"
#include <string>
#include <vector>

// ������
Member::Member(const std::string& id, const std::string& password, const std::string& phone_number)
    : SystemUser(id, password), phone_number_(phone_number) {
}

// ��ȭ��ȣ ��ȯ
std::string Member::GetPhoneNumber() const {
    return phone_number_;
}

// ������ ID �߰�
void Member::AddToRentedList(const std::string& bike_id) {
    rented_bike_ids_.push_back(bike_id);
}

// �뿩 ������ ��� ��ȯ
std::vector<std::string> Member::GetRentedList() const {
    return rented_bike_ids_;
}