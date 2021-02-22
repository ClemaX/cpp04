#include "Comet.hpp"

Comet::Comet()
	:	name("Comet")
{
}

Comet::~Comet()
{
}

Comet::Comet(Comet const& src)
	:	name(src.name)
{
}

Comet&		Comet::operator=(Comet const& src)
{
	if (this != &src)
		name = src.name;
	return *this;
}

std::string	Comet::beMined(DeepCoreMiner const* laser) const
{
	(void)laser;
	return "Meium";
}

std::string	Comet::beMined(StripMiner const* laser) const
{
	(void)laser;
	return "Tartarite";
}

std::ostream&	operator<<(std::ostream& os, Comet const& src)
{
	(void)src;
	os << "Comet";
	return os;
}
