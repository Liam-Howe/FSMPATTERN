//  Defines the entry point for the console application.
//
#include "stdafx.h"
#include "Renderer.h"
#include <iostream>
#include "Animation.h"
#include <thread>
#include <chrono>
using namespace std;



/**Create and initialises an instance of game, and clean up when the game is closed*/

int main()
{
	Renderer r;
	r.init(Size2D(800, 600), "sdlapp");
	Animation fsm;
	int i = 0;
	while (true)
	{
		if (i == 0)
		{
			fsm.jumping();
			std::this_thread::sleep_for(std::chrono::microseconds(1000));
			i =1 ;
		}
		else
		{
			fsm.climbing();
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
			i= 0;
		}
	}
	//run the game loop


    return 0;
}

