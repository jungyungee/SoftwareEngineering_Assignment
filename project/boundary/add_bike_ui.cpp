#include "add_bike_ui.h"

// 생성자
AddBikeUI::AddBikeUI(AddBikeControl* control) : control_(control) {}

// 등록 인터페이스 실행
void AddBikeUI::start_interface(std::istream& in, std::ostream& out) {
  control_->AddBike(in, out);
}