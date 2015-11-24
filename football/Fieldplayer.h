#ifndef FIELDPLAYER_H_
#define FIELDPLAYER_H_
#include "Position.h"
#include "Team.h"
class CFieldplayer
{
private:
	bool m_bBall;
	char* firstName;
	char* lastName;
	int iNumber;
public:
	CFieldplayer(char* firstName, char* lastName);
	~CFieldplayer();

	CPosition m_Position;
	void getBall();
	bool checkBall();
	bool goal(CTeam* Rival);
	void pass(CTeam* Team, CFieldplayer* previousPlayer);
	char* getFirstName();
	char* getLastName();
};

#endif