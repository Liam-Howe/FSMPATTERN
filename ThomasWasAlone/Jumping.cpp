#include "stdafx.h"
#include "Jumping.h"
#include <iostream>
#include "Idle.h"
void Jumping::idle(Animation * a)
{
	std::cout << "Going from jumping to Idling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
