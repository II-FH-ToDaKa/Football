#ifndef GAME_H_
#define GAME_H_
#include "Fieldplayer.h"
#include "Team.h"

class CGame
{
private:
	int m_iLengthField[2]; //x und y
	
	CTeam* Team[2];
	int m_iPoints[2];

public:
	CGame();
	~CGame();
	void setTeams(CTeam* TeamA, CTeam* TeamB);
	void startGame();
};

#endif