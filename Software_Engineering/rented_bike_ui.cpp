#include "rented_bike_ui.h"

// 생성자
RentedBikeUI::RentedBikeUI(RentedBikeControl* control) : control_(control) {}

// UI 실행: 입력을 control로 전달
void RentedBikeUI::start_interface(std::istream& in, std::ostream& out) {
	control_->ShowRentedBikes(in, out);
}