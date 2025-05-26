#include "bike.h"

// ������
Bike::Bike(const std::string& id, const std::string& bikename)
    : id_(id), bikename_(bikename), is_rented_(false) {
}

// ������ ID ��ȯ
std::string Bike::GetId() const {
    return id_;
}

// ������ �̸� ��ȯ
std::string Bike::GetBikeName() const {
    return bikename_;
}

// �뿩 ���� Ȯ��
bool Bike::IsRented() const {
    return is_rented_;
}

// ������ �뿩 ó��
void Bike::Rent() {
    is_rented_ = true;
}