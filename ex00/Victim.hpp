#pragma once

#include <iostream>
#include <string>

class Victim
{
private:
	std::string	name;

public:
	Victim();
	~Victim();
	
	Victim(const Victim& src);
	Victim(const std::string& name);

	inline const std::string&	getName() const;

	void	getPolymorphed() const;

	Victim&	operator=(const Victim& rhs);
};

std::ostream&	operator<<(std::ostream& os, const Victim& src);
