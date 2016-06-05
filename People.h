using namespace std;

class Guard
{

	int _defence_power;
	int _defence_intelligence;

public:
	Guard();
//	~Guard();

	int defence_intelligence();
	int defence_power(); 
	
};

class Robber
{
	
	int _offence_intelligence;
	int _offence_power;

public:
	Robber();
//	~Robber();

	int offence_intelligence();
	int offence_power();
	
};

class Client
 {
	
	int _dexterity;
	
public:
	
	Client();
//	~Client();

public:
	int dexterity();
	
};