#include "SpellBook.hpp"

SpellBook::SpellBook()
{

}

SpellBook::~SpellBook()
{

}

void	SpellBook::learnSpell(ASpell* spell)
{
	if (spell)
	{
		_spellBook[spell->getName()] = spell->clone();
	}
}

void	SpellBook::forgetSpell(std::string const & spellname)
{
	if (_spellBook.find(spellname) != _spellBook.end())
		_spellBook.erase(_spellBook.find(spellname));
}

ASpell*	SpellBook::createSpell(std::string const & spellname)
{
	ASpell* tmp = NULL;
	if (_spellBook.find(spellname) != _spellBook.end())
		tmp = _spellBook[spellname];
	return (tmp);
}

