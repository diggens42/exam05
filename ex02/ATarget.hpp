#pragma once
#include <iostream>

#include "ASpell.hpp"
class ASpell;

class ATarget
{
	public:
		ATarget(std::string type);
		ATarget & operator=(ATarget const & rhs);
		ATarget(ATarget const & obj);
		virtual ~ATarget();
		std::string getType() const;
		virtual ATarget* clone() const = 0;
		void	getHitBySpell(ASpell const & spell) const;

	protected:
		std::string	_type;

};
