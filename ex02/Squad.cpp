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
/**
 * @brief Get the current marines count.
 *
 * @return The marines count
 */
int				Squad::getCount() const { return marines.size(); }
ISpaceMarine*	Squad::getUnit(int index) const { return marines[index]; }

/**
 * @brief Push a marine onboard.
 *
 * @param newMarine A pointer to the new marine.
 * @return The new marine's index or -1 when given a NULL-pointer
 */
int				Squad::push(ISpaceMarine* newMarine)
{
	if (newMarine == NULL)
		return -1;

	const std::deque<ISpaceMarine*>::const_iterator	end = marines.end();
	std::deque<ISpaceMarine*>::const_iterator		it = marines.begin();

	while (it < end && *it != newMarine)
		it++;
	if (it == end)
	{
		marines.push_back(newMarine);
		return (marines.size());
	}
	return (end - it);
}

std::ostream&	operator<<(std::ostream& os, Squad const& src)
{
	std::cout << "Squad containing " << src.getCount() << " marines";
	return os;
}
