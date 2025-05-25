#include <fstream>
#include "control/register.h"
//#include "control_login.h"
//#include "control_logout.h"
//#include "add_bike_control.h"
//#include "bike_rental_control.h"
//#include "rented_bike_control.h"

extern std::ifstream in_fp;
extern std::ofstream out_fp;

void doTask() {
  int menu_level_1 = 0, menu_level_2 = 0;
  int is_program_exit = 0;

  while (!is_program_exit) {
    in_fp >> menu_level_1 >> menu_level_2;

    switch (menu_level_1) {
      case 1: {  // 회원가입
        switch (menu_level_2) {
          case 1: {
            out_fp << "1.1.\n";
            Register rc;
            rc.RegisterMember(in_fp, out_fp);
            break;
          }
        }
        break;
      }
/*       case 2: {  // 로그인 / 로그아웃
        switch (menu_level_2) {
          case 1: {
            out_fp << "2.1.\n";
            LoginControl lc;
            lc.login(in_fp, out_fp);
            break;
          }
          case 2: {
            out_fp << "2.2.\n";
            LogoutControl loc;
            loc.logout(in_fp, out_fp);
            break;
          }
        }
        break;
      }
      case 3: {  // 자전거 등록
        switch (menu_level_2) {
          case 1: {
            out_fp << "3.1.\n";
            AddBikeControl abc;
            abc.addBike(in_fp, out_fp);
            break;
          }
        }
        break;
      }
      case 4: {  // 자전거 대여
        switch (menu_level_2) {
          case 1: {
            out_fp << "4.1.\n";
            BikeRentalControl brc;
            brc.rentBike(in_fp, out_fp);
            break;
          }
        }
        break;
      }
      case 5: {  // 대여중인 자전거 조회
        switch (menu_level_2) {
          case 1: {
            out_fp << "5.1.\n";
            RentedBikeControl rbc;
            rbc.showRentedBikes(in_fp, out_fp);
            break;
          }
        }
        break;
      }
      case 6: {  // 종료
        switch (menu_level_2) {
          case 1: {
            out_fp << "6.1.\n";
            is_program_exit = 1;
            break;
          }
        }
        break;
      } */
    }  // switch(menu_level_1)
  }  // while
}