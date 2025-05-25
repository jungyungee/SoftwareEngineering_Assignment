#ifndef PROJECT_ENTITY_BIKE_H_
#define PROJECT_ENTITY_BIKE_H_

#include <string>

class Bike {
 public:
  Bike(const std::string& id, const std::string& model, const std::string& type);

  // Getter
  std::string GetId() const;
  std::string GetModel() const;
  std::string GetType() const;
  std::string GetStatus() const;

  // Setter
  void SetStatus(const std::string& status);

  // 상태 확인
  bool IsAvailable() const;

 private:
  std::string id_;
  std::string model_;
  std::string type_;    // 일반 / 전기
  std::string status_;  // 사용 가능 / 대여 중 / 수리 중
};

#endif  // PROJECT_ENTITY_BIKE_H_