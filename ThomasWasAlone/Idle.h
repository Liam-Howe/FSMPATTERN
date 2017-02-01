#pragma once
#include "State.h"
#include <iostream>


class Idle : public State
{
public:
	Idle() {};
	~Idle() {};
	
	void jumping(Animation*a) override;
	void climbing(Animation*a) override;

};