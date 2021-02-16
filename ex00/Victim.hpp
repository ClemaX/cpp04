#pragma once

#include <iostream>
#include <string>

class Victim
{
protected:
	std::string	name;

public:
	Victim();
	~Victim();

	Victim(const Victim& src);
	Victim(const std::string& name);

	Victim&	operator=(const Victim& rhs);

	inline std::string const&	getName() const	{ return (name); };

	virtual void	getPolymorphed() const;
};

std::ostream&	operator<<(std::ostream& os, const Victim& src);
