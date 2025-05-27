#ifndef LOGIN_UI_H_
#define LOGIN_UI_H_

#include "login.h"
#include <iostream>

/**
 * @brief �α��� UI Ŭ����
 *        ����� �Է��� �޾� control�� �����Ѵ�.
 */
class LoginUI {
public:
	/**
	 * @brief ������
	 */
	explicit LoginUI(LoginControl* control);

	/**
	 * @brief �α��� UI ����
	 */
	void start_interface(std::istream& in, std::ostream& out);

private:
	LoginControl* control_;  // control ���� ������
};

#endif  // LOGIN_UI_H_