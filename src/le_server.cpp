#include "le_server.h"

#include <SDL_net.h>

#include <iostream>

bool LeServer::Init()
{
	if (SDLNet_Init() < 0) 
	{
		std::cout << "SDLNet_INIT: " << SDLNet_GetError() << std::endl;
		return false;
	}
	return true;
}

void LeServer::Quit()
{
	SDLNet_Quit();
}

LeMessage::LeMessage()
{

}
