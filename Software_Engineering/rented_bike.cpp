#include "rented_bike.h"
#include <algorithm>

// 생성자
RentedBikeControl::RentedBikeControl(BikeRepository& bike_repo, MemberRepository& member_repo, Session& session)
    : bike_repo_(bike_repo), member_repo_(member_repo), session_(session) {
}

// 대여 중인 자전거 리스트 불러오고, 정렬
std::vector<Bike*> RentedBikeControl::GetRentedBikes() {
	SystemUser* user = session_.GetLoggedInUser();
	Member* member = dynamic_cast<Member*>(user);
	if (!member) return {};

	auto rented_ids = member->GetRentedList();
	std::sort(rented_ids.begin(), rented_ids.end());

	std::vector<Bike*> rented_bikes;
	for (const auto& id : rented_ids) {
		Bike* bike = bike_repo_.FindById(id);
		if (bike) {
			rented_bikes.push_back(bike);
		}
	}
	return rented_bikes;
}