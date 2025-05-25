#include <fstream>
#include "entity/member_repository.h"
#include "entity/session.h"
#include "entity/manager.h"
#include "control/register.h"
#include "control/login.h"
#include "control/logout.h"
#include "control/add_bike.h"
#include "boundary/register_ui.h"
#include "boundary/login_ui.h"
#include "boundary/logout_ui.h"
#include "boundary/add_bike_ui.h"

extern std::ifstream in_fp;
extern std::ofstream out_fp;

void doTask() {
  MemberRepository member_repo;
  BikeRepository bike_repo;
  Session session;
  Manager manager;

  int menu_level_1 = 0, menu_level_2 = 0;
  bool is_program_exit = false;

  while (!is_program_exit) {
    in_fp >> menu_level_1 >> menu_level_2;

    switch (menu_level_1) {
      case 1: {  // 회원가입
        switch (menu_level_2) {
          case 1: {
            out_fp << "1.1. 회원가입\n";
            Register reg(member_repo);
            RegisterUI ui(&reg);
            ui.start_interface(in_fp, out_fp);
            break;
          }
        }
        break;
      }

      case 2: {  // 로그인
        switch (menu_level_2) {
          case 1: {
            out_fp << "2.1. 로그인\n";
            LoginControl login_control(member_repo, session, manager);
            LoginUI login_ui(&login_control);
            login_ui.start_interface(in_fp, out_fp);
            break;
          }
          case 2: {
            out_fp << "2.2. 로그아웃\n";
            LogoutControl logout_control(session);
            LogoutUI logout_ui(&logout_control);
            logout_ui.start_interface(out_fp);
            break;
          }
        }
        break;
      }

      case 3: { // 자전거 등록
        switch (menu_level_2) {
          case 1: {
            out_fp << "3.1. 자전거 등록\n";
            AddBikeControl add_bike_control(bike_repo, session);
            AddBikeUI add_bike_ui(&add_bike_control);
            add_bike_ui.start_interface(in_fp, out_fp);
            break;
          }
        }
        break;
      }

      case 6: {  // 종료
        switch (menu_level_2) {
          case 1: {
            out_fp << "6.1. 종료\n";
            is_program_exit = true;
            break;
          }
        }
        break;
      }
    }
  }
}