#ifndef SESSION_H_
#define SESSION_H_

#include "system_user.h"
#include "member.h"
#include "manager.h"

/**
 * @brief ���� �α��ε� ������� ������ �����ϴ� ���� Ŭ���� (�α���, �α׾ƿ� ����)
 */
class Session {
public:
    /**
      * @brief �α��� ó��
      */
    void Login(SystemUser* user) { logged_in_ = user; }
    /**
     * @brief �α׾ƿ� ó��
     */
    void Logout() { logged_in_ = nullptr; }

    /**
     * @brief ���� �α��ε� ����� ��ȯ
     */
    SystemUser* GetLoggedInUser() const { return logged_in_; }

    /**
     * @brief ���� �α��ε� ����ڰ� Member���� Ȯ��
     * @return true�� Member
     */
    bool IsMemberLoggedIn() const {
        return dynamic_cast<Member*>(logged_in_) != nullptr;
    }

    /**
     * @brief ���� �α��ε� ����ڰ� Manager���� Ȯ��
     * @return true�� Manager
     */
    bool IsManagerLoggedIn() const {
        return dynamic_cast<Manager*>(logged_in_) != nullptr;
    }

    /**
     * @brief ���� �α��ε� ����ڸ� Member Ÿ������ ��ȯ
     * @return Member ������ (null�� �� ����)
     */
    Member* GetLoggedInMember() const {
        return dynamic_cast<Member*>(logged_in_);
    }

private:
    SystemUser* logged_in_ = nullptr;   // ���� �α��ε� ����� ������
};

#endif  // SESSION_H_