#ifndef PROJECT_ENTITY_DATABASE_H_
#define PROJECT_ENTITY_DATABASE_H_

#include <vector>
#include <string>
#include "member.h"
#include "manager.h"
#include "bike.h"

// 시스템 전체 데이터를 관리하는 단일 DB 클래스
class Database {
 public:
  static Database& GetInstance();  // 싱글톤 인스턴스

  // 회원 관련
  void AddMember(const Member& member);
  Member* FindMemberById(const std::string& id);

  // 관리자 접근
  Manager* GetManager();

  // 자전거 관련
  void AddBike(const Bike& bike);
  Bike* FindBikeById(const std::string& bike_id);
  std::vector<Bike>& GetAllBikes();

 private:
  Database();  // 생성자 private: 싱글톤

  std::vector<Member> members_;
  Manager manager_;
  std::vector<Bike> bikes_;
};

#endif  // PROJECT_ENTITY_DATABASE_H_
