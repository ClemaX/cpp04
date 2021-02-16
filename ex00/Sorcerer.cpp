#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
	:	name(""),
		title("")
{
	std::cout << "An empty Sorcerer is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << name << ", " << title
		<< ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer& src)
:	name(src.name),
	title(src.title)
{
	std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const std::string& name, const std::string& title)
	:	name(name),
		title(title)
{
	std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer&				Sorcerer::operator=(const Sorcerer& rhs)
{
	if (this != &rhs)
	{
		name = rhs.name;
		title = rhs.name;
	}
	return (*this);
}

const std::string&		Sorcerer::getName() const
{
	return (name);
}

const std::string&		Sorcerer::getTitle() const
{
	return (title);
}

void	Sorcerer::polymorph(Victim &const victim) const
{
	// TODO: Implement polymorph
}

std::ostream&			operator<<(std::ostream& os, const Sorcerer& src)
{
	os << "I am " << src.getName() << ", " << src.getTitle()
		<< ", and I like ponies!" << std::endl;
	return (os);
}

