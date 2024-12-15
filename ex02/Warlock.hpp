#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class Warlock
{
	public:
		Warlock(const std::string& name, const std::string& title);
		~Warlock();
		std::string const & getName() const;
		std::string const & getTitle() const;
		void	setTitle(std::string const & str);
		void	introduce() const;
		void	learnSpell(ASpell* spell);
		void	forgetSpell(std::string spellname);
		void	launchSpell(std::string spellname, ATarget const & target);


	private:
		Warlock & operator=(Warlock const & rhs);
		Warlock(Warlock const & obj);
		Warlock();
		std::string	_name;
		std::string	_title;
		SpellBook _spellBook;
};
