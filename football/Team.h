#ifndef TEAM_H_
#define TEAM_H_

#include "Goalkeeper.h"
#include "Fieldplayer.h"
class CTeam
{
private:

public:

	CTeam();
	~CTeam();
	//Der Spass muss in eine Funktion
	CFieldplayer* m_pPlayer[10];
	CGoalkeeper* m_pTorwart;

	CFieldplayer* getFieldplayer(int iPlayerNumber);
	bool addFieldplayer(CFieldplayer* Player);
	
	
};

#endif