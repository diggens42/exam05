#pragma once
#include "ATarget.hpp"
#include <map>

class TargetGenerator
{
	public:
		TargetGenerator();
		~TargetGenerator();
		void	learnTargetType(ATarget*);
		void	forgetTargetType(std::string const &);
		ATarget*	createTarget(std::string const &);

	private:
		TargetGenerator(TargetGenerator const & src);
		TargetGenerator & operator=(TargetGenerator const & src);
		std::map<std::string, ATarget*> _target;

};

