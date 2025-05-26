#include <fstream>

#include "member_repository.h"
#include "session.h"
#include "manager.h"
#include "controls.h"
#include "boundaries.h"

// �ܺο��� ����� �Է�/��� ��Ʈ��
extern std::ifstream in_fp;
extern std::ofstream out_fp;

/**
 * @brief ���α׷��� �� ���� �Լ�.
 *        �Է� ���Ͽ��� �޴� ��ȣ�� ���� ����� �����ϴ� UI/Control�� ȣ��.
 */
void doTask() {
    MemberRepository member_repo; // ȸ�� �����
    BikeRepository bike_repo;     // ������ �����
    Session session;              // ���� �α��ε� ����� ����
    Manager manager;              // ������ ��ü

    // �޴� �Ľ��� ���� level ������ ���� ����
    int menu_level_1 = 0, menu_level_2 = 0;
    bool is_program_exit = false;

    while (!is_program_exit) {
        // �Է����Ͽ��� �޴� ���� 2���� �б�
        in_fp >> menu_level_1 >> menu_level_2;

        // �޴� ���� �� �ش� ���� ����
        switch (menu_level_1) {
        case 1: {  // "1.1. ȸ�����ԡ� �޴� �κ�
            switch (menu_level_2) {
            case 1: {
                out_fp << "1.1. ȸ������\n";
                Register reg(member_repo);
                RegisterUI ui(&reg);
                ui.start_interface(in_fp, out_fp);
                break;
            }
            }
            break;
        }

        case 2: {
            switch (menu_level_2) {
            case 1: {  // "2.1. �α��Ρ� �޴� �κ�
                out_fp << "2.1. �α���\n";
                LoginControl login_control(member_repo, session, manager);
                LoginUI login_ui(&login_control);
                login_ui.start_interface(in_fp, out_fp);
                break;
            }
            case 2: {  // "2.2. �α׾ƿ��� �޴� �κ�
                out_fp << "2.2. �α׾ƿ�\n";
                LogoutControl logout_control(session);
                LogoutUI logout_ui(&logout_control);
                logout_ui.start_interface(out_fp);
                break;
            }
            }
            break;
        }

        case 3: {  // "3.1. ������ ��ϡ� �޴� �κ�
            switch (menu_level_2) {
            case 1: {
                out_fp << "3.1. ������ ���\n";
                AddBikeControl add_bike_control(bike_repo, session);
                AddBikeUI add_bike_ui(&add_bike_control);
                add_bike_ui.start_interface(in_fp, out_fp);
                break;
            }
            }
            break;
        }

        case 4: {  // "4.1. ������ �뿩�� �޴� �κ�
            switch (menu_level_2) {
            case 1: {
                out_fp << "4.1. ������ �뿩\n";
                BikeRentalControl bike_rental_control(bike_repo, session);
                BikeRentalUI bike_rental_ui(&bike_rental_control);
                bike_rental_ui.start_interface(in_fp, out_fp);
                break;
            }
            }
            break;
        }

        case 5: {  // "5.1. �뿩 ������ ��ȸ�� �޴� �κ�
            switch (menu_level_2) {
            case 1: {
                out_fp << "5.1. ������ �뿩 ����Ʈ\n";
                RentedBikeControl rented_bike_control(bike_repo, member_repo, session);
                RentedBikeUI rented_bike_ui(&rented_bike_control);
                rented_bike_ui.start_interface(in_fp, out_fp);
                break;
            }
            }
            break;
        }

        case 6: {  // "6.1. ���ᡰ �޴� �κ�
            switch (menu_level_2) {
            case 1: {
                out_fp << "6.1. ����";
                is_program_exit = true;
                break;
            }
            }
            break;
        }
        }
    }
}