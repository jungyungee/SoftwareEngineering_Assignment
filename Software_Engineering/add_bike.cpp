#include "add_bike.h"
#include "manager.h"

// 생성자
AddBikeControl::AddBikeControl(BikeRepository& bike_repo, Session& session)
    : bike_repo_(bike_repo), session_(session) {
}

// 자전거 등록-관리자만
Bike* AddBikeControl::AddBike(const std::string& id, const std::string& bikename) {
    SystemUser* user = session_.GetLoggedInUser();
    Manager* manager = dynamic_cast<Manager*>(user);

    if (!manager) return nullptr;  // 일반 사용자는 등록 불가

    Bike new_bike(id, bikename);
    bike_repo_.AddBike(new_bike);
    return bike_repo_.FindById(id);
}