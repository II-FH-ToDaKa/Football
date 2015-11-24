#include "Position.h"
#include <stdlib.h>


CPosition::CPosition()
{
}


CPosition::~CPosition()
{
}

void CPosition::setPosition(int ix, int iy)
{
	m_ix = ix;
	m_iy = iy;
}
int CPosition::getXPosition()
{
	return m_ix;
}
int CPosition::getYPosition()
{
	return m_iy;
}
void CPosition::randomPosition(int iFieldLengthX, int iFieldLengthY)
{
	m_ix = rand() % iFieldLengthX;
	m_iy = rand() % iFieldLengthY;
}