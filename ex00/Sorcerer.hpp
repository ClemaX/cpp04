#pragma once

#include <iostream>
#include <string>

#include "Victim.hpp"

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

	std::string const&		getName() const { return name; };
	std::string const&		getTitle() const { return title; };

	void	polymorph(Victim const& victim) const;
};

std::ostream&	operator<<(std::ostream& os, const Sorcerer& src);
