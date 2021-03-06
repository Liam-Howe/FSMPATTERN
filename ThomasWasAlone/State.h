#pragma once
#include "Animation.h"
#include <iostream>

class Animation;

class State
{
public:
	State() {};
	~State() {};

	virtual void idle(Animation *a)
	{
		std::cout << "State::Idling" << std::endl;
	}
	virtual void jumping(Animation * a)
	{
		std::cout << "State::Jumping" << std::endl;
	}
	virtual void climbing(Animation * a)
	{
		std::cout << "State::Climbing" << std::endl;
	}

};