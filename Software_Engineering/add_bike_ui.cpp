#include "add_bike_ui.h"

// ������
AddBikeUI::AddBikeUI(AddBikeControl* control) : control_(control) {}

// ��� �������̽� ����
void AddBikeUI::start_interface(std::istream& in, std::ostream& out) {
    std::string id, bikename;
    in >> id >> bikename;

    Bike* new_bike = control_->AddBike(id, bikename);

    if (new_bike) {
        out << "> " << new_bike->GetId() << " " << new_bike->GetBikeName() << "\n\n";
    }
    else {
        // ������ �ƴ� ��� �ƹ� ��µ� �� �� (�䱸���׿� ���� ���� ����)
    }
}