#ifndef POSITION_H_
#endif POSITION_H_H

class CPosition
{
private:
	int m_ix;
	int m_iy;
public:
	CPosition();
	~CPosition();
	void setPosition(int x, int y);
	void randomPosition(int iFieldLengthX, int iFieldLengthY);
	int getXPosition();
	int getYPosition();
};

#endif