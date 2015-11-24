#pragma once
#include "Fieldplayer.h"
#include "Goalkeeper.h"

class CPlayerPool
{
private:
	CFieldplayer* m_pPlayer;
	CGoalkeeper* m_pTorwart;
public:
	CPlayerPool();
	~CPlayerPool();
	
};

