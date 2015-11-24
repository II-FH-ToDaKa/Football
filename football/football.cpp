#include <iostream>
#include "Fieldplayer.h"
#include "Game.h"
using namespace std;

void main()
{
	CFieldplayer* pMueller;
	pMueller = new CFieldplayer("Thomas", "Mueller");

	CFieldplayer Mueller("Thomas", "Mueller");
	CFieldplayer Aigner("Rainer", "Aigner");
	CFieldplayer Alaba("David", "Alaba");
	CFieldplayer Altntop("Hamit ", "Altntop");
	CFieldplayer Andersson("Patrik", "Andersson");
	CFieldplayer Arbinger("Fred", "Arbinger");
	CFieldplayer Aubynn("Jeffrey", "Aubynn");
	CFieldplayer Augenthaler("Klaus", "Augenthaler");
	CFieldplayer Aumann("Raimond", "Aumann");
	CFieldplayer Babbel("Markus", "Babbel");
	CFieldplayer Bacak("Stefan", "Bacak");
	CFieldplayer Backer("Sebastian", "Backer");
	CFieldplayer Badstuber("Holger", "Badstuber");
	CFieldplayer Ballack("Michael", "Ballack");
	CFieldplayer Barut("Barbaros", "Barut");
	CFieldplayer Basler("Mario", "Basler");
	CFieldplayer Baumjohann("Alexander", "Baumjohann");
	CFieldplayer Bayerschmidt("Uli", "Bayerschmidt");
	CFieldplayer Beckenbauer("Franz", " Beckenbauer");
	CFieldplayer Beierlorzer("Bertram", "Beierlorzer");
	CFieldplayer Bender("Manfred", " Bender");
	CFieldplayer Benfeld("Joachim", "Benfeld");
	CFieldplayer Bentil("Emanuel", " Bentil");

	CTeam BayernMuenchen;
	CTeam FCBarcelona;
	
	BayernMuenchen.addFieldplayer(pMueller);
	BayernMuenchen.addFieldplayer(&Aigner);

	CGame newGame;


	
	char* Name;


}