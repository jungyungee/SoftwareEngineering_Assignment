#include "register_ui.h"

// UI ����: �Է��� control�� �����Ͽ� ȸ�� ��� ó��
void RegisterUI::start_interface(std::istream& in, std::ostream& out) {
	control_->RegisterMember(in, out);
}