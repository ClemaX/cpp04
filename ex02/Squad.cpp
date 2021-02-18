#include "Squad.hpp"

Squad::Squad()
	:	marines()
{
}

Squad::~Squad()
{
	const std::deque<ISpaceMarine*>::const_iterator	end = marines.end();
	std::deque<ISpaceMarine*>::iterator				it = marines.begin();

	while (it < end)
		delete *it++;
	marines.clear();
}

Squad::Squad(Squad const& src)
	:	marines(src.marines.size())
{
	const std::deque<ISpaceMarine*>::const_iterator	end = src.marines.end();
	std::deque<ISpaceMarine*>::const_iterator		it = src.marines.begin();
	std::deque<ISpaceMarine*>::iterator				newIt = marines.begin();

	while (it < end)
		*newIt++ = (*it++)->clone();
}

Squad&		Squad::operator=(Squad const& src)
{
	std::deque<ISpaceMarine*>::const_iterator	end = marines.end();
	std::deque<ISpaceMarine*>::const_iterator	it = marines.end();

	while (it < end)
		delete *it++;

	marines.resize(src.marines.size());

	end = src.marines.end();
	it = src.marines.begin();

	std::deque<ISpaceMarine*>::iterator	newIt = marines.begin();

	while (it < end)
		*newIt++ = (*it++)->clone();

	return *this;
}

int				Squad::getCount() const { return marines.size(); }
ISpaceMarine*	Squad::getUnit(int index) const { return marines[index]; }

int				Squad::push(ISpaceMarine* newMarine)
{
	if (newMarine != NULL)
	{
		const std::deque<ISpaceMarine*>::const_iterator	end = marines.end();
		std::deque<ISpaceMarine*>::const_iterator		it = marines.begin();

		while (it < end && *it != newMarine)
			it++;
		if (it == end)
			marines.push_back(newMarine);
	}

	return marines.size();
}

std::ostream&	operator<<(std::ostream& os, Squad const& src)
{
	std::cout << "Squad containing " << src.getCount() << " marines";
	return os;
}
