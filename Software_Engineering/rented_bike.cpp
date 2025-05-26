#include "rented_bike.h"
#include <string>
#include <algorithm>

// 생성자
RentedBikeControl::RentedBikeControl(BikeRepository& bike_repo, MemberRepository& member_repo, Session& session)
    : bike_repo_(bike_repo), member_repo_(member_repo), session_(session) {
}

// 로그인된 회원의 대여 자전거 목록을 출력
void RentedBikeControl::ShowRentedBikes(std::istream& in, std::ostream& out) {
    SystemUser* user = session_.GetLoggedInUser();
    Member* member = dynamic_cast<Member*>(user);

    if (!member) {
        return;  // 로그인된 회원이 아니면 종료
    }

    auto rented_list = member->GetRentedList();
    if (rented_list.empty()) {
        return;  // 대여중인 자전거가 없으면 종료
    }

    std::sort(rented_list.begin(), rented_list.end());

    for (const auto& bike_id : rented_list) {
        Bike* bike = bike_repo_.FindById(bike_id);
        if (bike) {
            out << "> " << bike->GetId() << " " << bike->GetBikeName() << "\n";
        }
    }
    out << "\n";
}