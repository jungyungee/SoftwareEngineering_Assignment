#include "register_ui.h"

// ������
RegisterUI::RegisterUI(Register* control) : control_(control) {}

// UI ����: �Է¹ް�,��� ���
void RegisterUI::start_interface(std::istream& in, std::ostream& out) {
    std::string id, password, phone;
    in >> id >> password >> phone;

    Member* new_member = control_->RegisterMember(id, password, phone);

    if (new_member) {
        out << "> " << new_member->GetId() << " "
            << new_member->GetPassword() << " "
            << new_member->GetPhoneNumber() << "\n\n";
        return;
    }
}