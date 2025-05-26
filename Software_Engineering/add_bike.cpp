#include "add_bike.h"
#include "bike.h"
#include "manager.h"

#include <iostream>
#include <string>

// ������
AddBikeControl::AddBikeControl(BikeRepository& bike_repo, Session& session)
    : bike_repo_(bike_repo), session_(session) {
}

// ������ ���-�����ڸ�
void AddBikeControl::AddBike(std::istream& in, std::ostream& out) {
    std::string id, bikename;
    in >> id >> bikename;

    // �α��ε� ����ڰ� �������� ��쿡�� ��� ����
    SystemUser* user = session_.GetLoggedInUser();
    Manager* manager = dynamic_cast<Manager*>(user);
    if (manager == nullptr) {
        // �Ϲ� ������ ��� �Ұ� -> �ƹ� ��� ���� ����
        return;
    }

    Bike new_bike(id, bikename);
    bike_repo_.AddBike(new_bike);
    out << "> " << id << " " << bikename << "\n\n";
}