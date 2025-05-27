#include "rented_bike.h"
#include <algorithm>

// ������
RentedBikeControl::RentedBikeControl(BikeRepository& bike_repo, MemberRepository& member_repo, Session& session)
    : bike_repo_(bike_repo), member_repo_(member_repo), session_(session) {
}

// �뿩 ���� ������ ����Ʈ �ҷ�����, ����
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