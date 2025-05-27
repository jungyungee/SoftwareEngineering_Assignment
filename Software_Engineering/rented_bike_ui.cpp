#include "rented_bike_ui.h"

// ������
RentedBikeUI::RentedBikeUI(RentedBikeControl* control) : control_(control) {}

// UI ����: �Է��� control�� ����
void RentedBikeUI::start_interface(std::ostream& out) {
	auto bikes = control_->GetRentedBikes();

	if (bikes.empty()) {
		out << "> �뿩���� �����Ű� �����ϴ�.\n\n";
		return;
	}

	for (auto* bike : bikes) {
		out << "> " << bike->GetId() << " " << bike->GetBikeName() << "\n";
	}
	out << "\n";
}