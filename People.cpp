#include "People.h"
#include <stdlib.h>

int Guard::defence_intelligence()
{
	return 20 + rand() % 75;	
}

int Guard::defence_power()
{
	return 20 + rand() % 75;	
} 

Guard::Guard()
{

	_defence_power = defence_power();
	_defence_intelligence = defence_intelligence();
	
}

int Robber::offence_power()
{
	return 20 + rand() % 80;	
}
int Robber::offence_intelligence()
{
	return 20 + rand() % 80;	
}

Robber::Robber()
{
	
	_offence_power = offence_power();
	_offence_intelligence = offence_intelligence();
	
	
}

int Client::dexterity()
{
	return 1 + rand() % 120;	
}

Client::Client()
{

	_dexterity =  dexterity();
		
}
