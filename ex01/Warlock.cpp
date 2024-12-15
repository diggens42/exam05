#include "Warlock.hpp"

Warlock::Warlock(const std::string& name, const std::string& title) : _name(name), _title(title)
{
	std::cout << getName() << ": This looks like another boring day." << std::endl;
}
Warlock::~Warlock()
{
	std::cout << getName() << ": My job here is done!" << std::endl;
}
std::string const & Warlock::getName() const
{
	return (_name);
}
std::string const & Warlock::getTitle() const
{
	return (_title);
}
void	Warlock::setTitle(std::string const & str)
{
	_title = str;
}
void	Warlock::introduce() const
{
	std::cout << getName() << ": I am " << getName() << ", " << getTitle() << "!" << std::endl;
}

Warlock & Warlock::operator=(Warlock const & rhs)
{
	this->_name = rhs.getName();
	this->_title = rhs.getTitle();
	return (*this);
}
Warlock::Warlock(Warlock const & obj)
{
	*this = obj;
}
Warlock::Warlock()
{

}

void	Warlock::learnSpell(ASpell* spell)
{
	if(spell)
	{
		if (_spellBook.find(spell->getName()) == _spellBook.end())
			_spellBook[spell->getName()] = spell->clone();
	}
}

void	Warlock::forgetSpell(std::string spellname)
{
	if (_spellBook.find(spellname) != _spellBook.end())
	{
		delete (_spellBook[spellname]);
		_spellBook.erase(_spellBook.find(spellname));
	}
}

void	Warlock::launchSpell(std::string spellname, ATarget const & target)
{
	if (_spellBook.find(spellname) != _spellBook.end())
		_spellBook[spellname]->launch(target);
}

