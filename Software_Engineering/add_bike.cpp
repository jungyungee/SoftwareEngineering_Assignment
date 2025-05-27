#include "add_bike.h"
#include "manager.h"

// ������
AddBikeControl::AddBikeControl(BikeRepository& bike_repo, Session& session)
    : bike_repo_(bike_repo), session_(session) {
}

// ������ ���-�����ڸ�
Bike* AddBikeControl::AddBike(const std::string& id, const std::string& bikename) {
    SystemUser* user = session_.GetLoggedInUser();
    Manager* manager = dynamic_cast<Manager*>(user);

    if (!manager) return nullptr;  // �Ϲ� ����ڴ� ��� �Ұ�

    Bike new_bike(id, bikename);
    bike_repo_.AddBike(new_bike);
    return bike_repo_.FindById(id);
}