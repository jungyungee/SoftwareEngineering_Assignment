#include "rented_bike.h"
#include <string>
#include <algorithm>

// ������
RentedBikeControl::RentedBikeControl(BikeRepository& bike_repo, MemberRepository& member_repo, Session& session)
    : bike_repo_(bike_repo), member_repo_(member_repo), session_(session) {
}

// �α��ε� ȸ���� �뿩 ������ ����� ���
void RentedBikeControl::ShowRentedBikes(std::istream& in, std::ostream& out) {
    SystemUser* user = session_.GetLoggedInUser();
    Member* member = dynamic_cast<Member*>(user);

    if (!member) {
        return;  // �α��ε� ȸ���� �ƴϸ� ����
    }

    auto rented_list = member->GetRentedList();
    if (rented_list.empty()) {
        return;  // �뿩���� �����Ű� ������ ����
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