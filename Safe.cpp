#include "Safe.h"
#include <stdlib.h>


int Safe::durability()
{
	return 1 + rand() % 195;	
}

Safe::Safe()
{

	_durability = durability();
	
	
}