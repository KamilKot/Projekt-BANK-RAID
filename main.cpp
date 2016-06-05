#include "People.h"
#include "Safe.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string>
#include <iostream>
using namespace std;

#define HIT_INTERVAL 100000

int main(int argc, char const *argv[])
{
	srand(argc == 2 
		? atoi(argv[1]) 
		: time(NULL));

	//Generujemy nasepujace obiekty:

	Client clients[1];
	Guard guards[1];
 	Robber robbers[1];
 	Safe s1;

	srand(time(NULL));

	while(1)
 	
 	{ //Zaczynamy symulacje calego procesu napadu
 		cout<<"Złodzieje wchodzą do banku"<<endl;
	if ( (clients[0].dexterity() + clients[1].dexterity() ) >= 160)
 		{cout<<"Napad nie udany, klienci uciekli i powiadomili policję"<<endl;
 		break; }

 	else
 	cout<<"Napad trwa "<<endl;
 	
	//Nastepuje potyczka w banku pomiedzy parami złodzieji i straznikow
 	
 	if((guards[0].defence_intelligence() == guards[1].defence_intelligence()) >= 80)
 	
 	{ cout<<"Napad nieudany, ochroniarze są bardzo inteligentni i rozpoznali w banku zlodzieji"<<endl;
 		break; 
 	}
 		else
 		usleep(HIT_INTERVAL);
 		 //Napad trwa dalej ochroniarze mogą jeszcze zatrzymać złodzieji siłą

 	if(guards[0].defence_power() > robbers[0].offence_power() && guards[1].defence_power() > robbers[1].offence_power())

 	{ cout<<"Napad nieudany, ochroniarze byli za silni i zatrzymali zlodzieji"<<endl;
 	break; }

 	else
 	{  cout<<"Ochroniarze obezwladnieni"<<endl;
 	//Napad trwa dalej, zlodzieje musza sforsowac jeszcze sejf
	 cout<<"Złodzieje oceniaja poziom zabezpieczen sejfu, maja 10s"<<endl;
 		for(int i=10; i>=0; i--)
 	{
 		usleep(HIT_INTERVAL);
 		cout<< i <<endl;
 	}
 	
 	}

 	if(s1.durability()<=robbers[0].offence_intelligence() + robbers[1].offence_intelligence() )
 	{	cout<<"Nastepuje otwarcie mechanizmu sejfu"<<endl;
 	 for(int i=10; i>=0; i--)
 			{
 			usleep(HIT_INTERVAL);
 		
 			cout<< i <<endl;
 			}

 			cout<<"Sejf otwarty, złodzieje ukradli z banku 1 mln złotych"<<endl;

 			break; }

 			else
 			{
 			cout<<"Sejf nie został otworzony, złodzieje uciekają z banku z pieniedzmi z kasy - tysiacem zlotych"<<endl;
 			break; }
 	 }

 	}


	

