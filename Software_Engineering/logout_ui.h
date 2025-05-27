#ifndef LOGOUT_UI_H_
#define LOGOUT_UI_H_


#include <iostream>
#include "logout.h"

/**
 * @brief �α׾ƿ� UI Ŭ����
 *        �α׾ƿ� ��û�� control��
 */
class LogoutUI {
public:
	/**
	  * @brief ������
	  */
	explicit LogoutUI(LogoutControl* control);

	/**
	 * @brief �α׾ƿ� UI ����
	 */
	void start_interface(std::ostream& out);

private:
	LogoutControl* control_;  // control ������
};

#endif  // LOGOUT_UI_H_