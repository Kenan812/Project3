#include "User.h"

User::User()
{
	name = "";
}

User::User(std::string _name)
{
	name = _name;
}

void User::SetName(std::string _name)
{
	name = _name;
}

std::string User::GetName()
{
	return name;
}

