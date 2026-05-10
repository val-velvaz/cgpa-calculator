#pragma once

#include <string>

class Password {
private:
	std::string password;
public:
	Password() = default;

	bool validatePassword();
	std::string& changePassword();
	void viewPassword() const;
};