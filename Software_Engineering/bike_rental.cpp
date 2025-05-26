#include "bike_rental.h"
#include <iostream>
#include <string>

// ������
BikeRentalControl::BikeRentalControl(BikeRepository& bike_repo, Session& session)
    : bike_repo_(bike_repo), session_(session) {
}


// ������ ID �Է� �� �뿩 �����ϸ� �뿩 ó��
void BikeRentalControl::RentBike(std::istream& in, std::ostream& out) {
    SystemUser* user = session_.GetLoggedInUser();
    Member* member = dynamic_cast<Member*>(user);

    std::string bike_id;
    in >> bike_id;

    // �α��� ���� �ƴϰų� �Ϲ� ȸ���� �ƴϸ� ����
    if (!member) return;

    // �����Ű� ���ų� �̹� �뿩 ���̸� ����
    Bike* bike = bike_repo_.FindById(bike_id);
    if (!bike || bike->IsRented()) return;

    //�뿩
    bike->Rent();
    member->AddToRentedList(bike_id);

    out << "> " << bike->GetId() << " " << bike->GetBikeName() << "\n\n";
}