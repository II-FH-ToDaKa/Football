#include "Team.h"



CTeam::CTeam()
{
	for (int i_NumberPlayer = 0; i_NumberPlayer < 10; i_NumberPlayer++)
	{
		m_pPlayer[i_NumberPlayer]=nullptr;
	}
}


CTeam::~CTeam()
{
}
bool CTeam::addFieldplayer(CFieldplayer* Player)
{
	int i_ActualPlayer = 0;
	while ((m_pPlayer[i_ActualPlayer] != nullptr) && (i_ActualPlayer < 10))
	{
		
	}
	if (i_ActualPlayer >= 10)
	{
		//Team ist voll
		return false;
	}
	else
	{
		m_pPlayer[i_ActualPlayer] = Player;
		return true;
	}
}

CFieldplayer* CTeam::getFieldplayer(int iPlayerNumber)
{
	return m_pPlayer[iPlayerNumber];
}