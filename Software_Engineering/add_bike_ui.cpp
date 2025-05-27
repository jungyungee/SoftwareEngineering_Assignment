#include "add_bike_ui.h"

// 생성자
AddBikeUI::AddBikeUI(AddBikeControl* control) : control_(control) {}

// 등록 인터페이스 실행
void AddBikeUI::start_interface(std::istream& in, std::ostream& out) {
    std::string id, bikename;
    in >> id >> bikename;

    Bike* new_bike = control_->AddBike(id, bikename);

    if (new_bike) {
        out << "> " << new_bike->GetId() << " " << new_bike->GetBikeName() << "\n\n";
    }
    else {
        // 관리자 아닐 경우 아무 출력도 안 함 (요구사항에 따라 조정 가능)
    }
}