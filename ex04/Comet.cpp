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

std::string const&	Comet::beMined(DeepCoreMiner const* laser) const
{
	return "Meium";
}

std::string const&	Comet::beMined(StripMiner const* laser) const
{
	return "Tartarite";
}

std::ostream&	operator<<(std::ostream& os, Comet const& src)
{
	os << "Comet";
	return os;
}
