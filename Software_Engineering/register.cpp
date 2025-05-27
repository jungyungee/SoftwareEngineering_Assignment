#include "register.h"

//생성자
Register::Register(MemberRepository& repo) : repo_(repo) {}

// 입력받은 정보로 회원을 생성하고 저장소에 추가
Member* Register::RegisterMember(const std::string& id, const std::string& pw, const std::string& phone) {
    Member* new_member = new Member(id, pw, phone);
    repo_.AddMember(new_member);
    return new_member;
}