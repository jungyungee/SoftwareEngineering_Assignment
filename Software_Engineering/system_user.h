#ifndef SYSTEM_USER_H_
#define SYSTEM_USER_H_

#include <string>

/**
 * @brief 시스템 사용자(회원/관리자) 공통 클래스
 */
class SystemUser {
public:
	/**
	 * @brief 생성자
	 */
	SystemUser(const std::string& id, const std::string& password);
	/**
	 * @brief 가상 소멸자
	 */
	virtual ~SystemUser() = default;

	/**
	 * @brief 사용자 ID 반환
	 */
	std::string GetId() const;
	/**
	 * @brief 사용자 비밀번호 반환
	 */
	std::string GetPassword() const;
	/**
	 * @brief 세션 정보 초기화 (ID/비밀번호 비우기)
	 */
	void ClearSession();

protected:
	std::string id_;        // 사용자 ID
	std::string password_;  // 사용자 비밀번호
};

#endif  // SYSTEM_USER_H_