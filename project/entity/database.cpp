#include "database.h"

// 싱글톤 인스턴스 반환
Database& Database::GetInstance() {
  static Database instance;
  return instance;
}

Database::Database() : manager_() {}  // 기본 관리자 초기화

// 회원 관리
void Database::AddMember(const Member& member) {
  members_.push_back(member);
}

Member* Database::FindMemberById(const std::string& id) {
  for (auto& member : members_) {
    if (member.GetId() == id) {
      return &member;
    }
  }
  return nullptr;
}

// 관리자 접근
Manager* Database::GetManager() {
  return &manager_;
}

// 자전거 관리
void Database::AddBike(const Bike& bike) {
  bikes_.push_back(bike);
}

Bike* Database::FindBikeById(const std::string& bike_id) {
  for (auto& bike : bikes_) {
    if (bike.GetId() == bike_id) {
      return &bike;
    }
  }
  return nullptr;
}

std::vector<Bike>& Database::GetAllBikes() {
  return bikes_;
}