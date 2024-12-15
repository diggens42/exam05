#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{

}

TargetGenerator::~TargetGenerator()
{

}

void	TargetGenerator::learnTargetType(ATarget* target)
{
	if (target)
		_target[target->getType()] = target;
}

void	TargetGenerator::forgetTargetType(std::string const & target)
{
	if (_target.find(target) != _target.end())
		_target.erase(_target.find(target));
}

ATarget*	TargetGenerator::createTarget(std::string const & target)
{
	ATarget* temp = NULL;
	if (_target.find(target) != _target.end())
		temp = _target[target];
	return (temp);
}

