#include "Game.h"
#include <stdlib.h>



CGame::CGame()
{
	m_iLengthField[0] = 130;//x Wert
	m_iLengthField[1] = 100;//y Wert
	Team[0] = { nullptr };
	Team[1] = { nullptr };
	m_iPoints[2] = { 0 };
}


CGame::~CGame()
{
}
void CGame::setTeams(CTeam* TeamA, CTeam* TeamB)
{
	
	Team[0] = TeamA;
	Team[1] = TeamB;
}
void CGame::startGame()
{
	if ((Team[0] == nullptr) && (Team[1] == nullptr))
	{
		//Teams wurden nicht zugewissen
	}
	else
	{
		//Zufällig Position
		for (int iTeam = 0; iTeam < 2; iTeam++)
		{
			for (int iPlayer = 0; iPlayer < 10; iPlayer++)
			{
				CPosition pRandomPosition;
				pRandomPosition.randomPosition(m_iLengthField[1], m_iLengthField[2]);
				Team[iTeam]->m_pPlayer[iPlayer]->m_Position.setPosition(pRandomPosition.getXPosition(), pRandomPosition.getYPosition());
			}

		}
		//Ball zufällig zuweisen
		int iPlayer = rand() % 9;
		int iTeam = rand() % 1;
		Team[iTeam]->m_pPlayer[iPlayer]->getBall();
		
		CFieldplayer* previousPlayer;

		bool bGoal;

		//Wahrscheinlichkeit
		int iprobability;
		while ((m_iPoints[0] != 10) && (m_iPoints[1] != 10))
		{
			bGoal = false;
			//pass zu anderen Spieler oder Schuss auf Tor
			iprobability = rand() % 10;
			if (iprobability < 9)
			{

				iprobability = rand() %10;
			
				//abfangen des Gegners bei einen Pass 
				if (iprobability < 6)
				{
					Team[iTeam]->m_pPlayer[iPlayer]->pass(Team[iTeam], previousPlayer);

				}
				else
				{
					//Ball an Gegnerisches Team
					if (iTeam == 1)
					{
						Team[iTeam]->m_pPlayer[iPlayer]->pass(Team[2], nullptr);
					}
					else
					{
						Team[iTeam]->m_pPlayer[iPlayer]->pass(Team[1], nullptr);
					}
				}

			}
			else
			{
				//Schuss auf Tor
				if (iTeam == 1)
				{
					bGoal = Team[iTeam]->m_pPlayer[iPlayer]->goal(Team[2]);
				}
				else
				{
					bGoal = Team[iTeam]->m_pPlayer[iPlayer]->goal(Team[1]);
				}
				if (bGoal)
				{
					m_iPoints[iTeam]++;
				}
			}
			
		}

	}
}
