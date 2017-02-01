#include "stdafx.h"
#include "Idle.h"
#include "Climbing.h"
#include "Jumping.h"

Animation::Animation()
{
	 current = new Idle(); 
}

Animation::~Animation()
{

}

void Animation::idle()
{
	current->idle(this);
}

void Animation::jumping()
{
	current->jumping(this);
}

void Animation::climbing()
{
	current->climbing(this);
}
