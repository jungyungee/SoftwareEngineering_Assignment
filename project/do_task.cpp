#include <fstream>

#include "entity/member_repository.h"
#include "entity/session.h"
#include "entity/manager.h"
#include "control/controls.h"
#include "boundary/boundaries.h"

// 외부에서 선언된 입력/출력 스트림
extern std::ifstream in_fp;
extern std::ofstream out_fp;

/**
 * @brief 프로그램의 주 실행 함수.
 *        입력 파일에서 메뉴 번호에 따른 기능을 수행하는 UI/Control을 호출.
 */
void doTask() {
  MemberRepository member_repo; // 회원 저장소
  BikeRepository bike_repo;     // 자전거 저장소
  Session session;              // 현재 로그인된 사용자 정보
  Manager manager;              // 관리자 객체

  // 메뉴 파싱을 위한 level 구분을 위한 변수
  int menu_level_1 = 0, menu_level_2 = 0;
  bool is_program_exit = false;

  while (!is_program_exit) {
    // 입력파일에서 메뉴 숫자 2개를 읽기
    in_fp >> menu_level_1 >> menu_level_2;

    // 메뉴 구분 및 해당 연산 수행
    switch (menu_level_1) {
      case 1: {  // "1.1. 회원가입“ 메뉴 부분
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

      case 2: {
        switch (menu_level_2) {
          case 1: {  // "2.1. 로그인“ 메뉴 부분
            out_fp << "2.1. 로그인\n";
            LoginControl login_control(member_repo, session, manager);
            LoginUI login_ui(&login_control);
            login_ui.start_interface(in_fp, out_fp);
            break;
          }
          case 2: {  // "2.2. 로그아웃“ 메뉴 부분
            out_fp << "2.2. 로그아웃\n";
            LogoutControl logout_control(session);
            LogoutUI logout_ui(&logout_control);
            logout_ui.start_interface(out_fp);
            break;
          }
        }
        break;
      }

      case 3: {  // "3.1. 자전거 등록“ 메뉴 부분
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

      case 4: {  // "4.1. 자전거 대여“ 메뉴 부분
        switch (menu_level_2) {
          case 1: {
            out_fp << "4.1. 자전거 대여\n";
            BikeRentalControl bike_rental_control(bike_repo, session);
            BikeRentalUI bike_rental_ui(&bike_rental_control);
            bike_rental_ui.start_interface(in_fp, out_fp);
            break;
          }
        }
        break;
      }

      case 5: {  // "5.1. 대여 자전거 조회“ 메뉴 부분
        switch (menu_level_2) {
          case 1: {
            out_fp << "5.1. 대여 자전거 조회\n";
            RentedBikeControl rented_bike_control(bike_repo, member_repo, session);
            RentedBikeUI rented_bike_ui(&rented_bike_control);
            rented_bike_ui.start_interface(in_fp, out_fp);
            break;
          }
        }
        break;
      }

      case 6: {  // "6.1. 종료“ 메뉴 부분
        switch (menu_level_2) {
          case 1: {
            out_fp << "6.1. 종료";
            is_program_exit = true;
            break;
          }
        }
        break;
      }
    }
  }
}