#include "Fieldplayer.h"
#include "Team.h"

#include <stdio.h>
#include <string>



CFieldplayer::CFieldplayer(char* firstName, char* lastName)
{
	this->firstName = firstName;
	this->lastName = lastName;
	iNumber = -1;
}




CFieldplayer::~CFieldplayer()
{
}

char* CFieldplayer::getFirstName()
{
	return firstName;
}

char* CFieldplayer::getLastName()
{
	return lastName;
}

void CFieldplayer::getBall()
{
	m_bBall = true;
}
bool CFieldplayer::checkBall()
{
	return m_bBall;
}
void CFieldplayer::pass(CTeam* pTeam, CFieldplayer* previousPlayer)
{
	double iMinDistance = -1;
	int iNextPlayer;
	
	//Wenn nullptr wurde Ball abgefangen, Zufälliger Gegner bekommt den Ball
	if (previousPlayer == nullptr)
	{
		iNextPlayer = rand() % 9;
	}
	else
	{

		//hole Standort von eigenen Spieler
		int iXPlayer = m_Position.getXPosition();
		int iYPlayer = m_Position.getYPosition();

		for (int iPlayer = 0; iPlayer < 10; iPlayer++)
		{
			//überprüfen ob nicht vorheriger Spieler
			if (previousPlayer != pTeam->getFieldplayer(iPlayer))
			{
				//hole Standort von anderen Spieler
				int iXOtherPlayer = pTeam->m_pPlayer[iPlayer]->m_Position.getXPosition();
				int iYOtherPlayer = pTeam->m_pPlayer[iPlayer]->m_Position.getYPosition();

				//Delta ausrechnen
				int ix = iXOtherPlayer - iXPlayer;
				int iy = iYOtherPlayer - iYPlayer;
				if (ix < 0)
				{
					ix = ix*-1;
				}
				if (iy < 0)
				{
					iy = iy*-1;
				}
				int iDistance = (ix * ix) + (iy * iy);

				//in MinDistance Variable setzen und Spieler merken
				if (iDistance <= iMinDistance || iMinDistance == -1)
				{
					iMinDistance = iDistance;
					iNextPlayer = iPlayer;
				}
			}

		}
	}
	//Ball übergeben
	m_bBall = false;
	pTeam->m_pPlayer[iNextPlayer]->getBall();
}

bool CFieldplayer::goal(CTeam* Rival)
{

	m_bBall = false;
	//an Zufälligen Gegner
	pass(Rival, nullptr);

	int iProbability = rand() % 100;
	if (iProbability < 80)
	{
		return false;
	}
	else
	{
		iProbability = rand() % 100;
		if (iProbability < 75)
		{
			return false;
		}
		else
		{			
			return true;
		}

	}
}