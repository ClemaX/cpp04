#pragma once

#include <iostream>
#include <string>

class Sorcerer
{
private:
	std::string	name;
	std::string	title;

public:
	Sorcerer();
	~Sorcerer();

	Sorcerer(const Sorcerer& src);
	Sorcerer(const std::string& name, const std::string& title);

	Sorcerer&	operator=(const Sorcerer& rhs);

	inline const std::string&	getName() const;
	inline const std::string&	getTitle() const;
};

std::ostream&	operator<<(std::ostream& os, const Sorcerer& src);
