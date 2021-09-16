#pragma once
class superBomba
{
private:
	int altoSuperBomba;
	int anchoSuperBomba;
	int posicionX;
	int posicionY;
	int explosion;

public:

	int getAltoSuperBomba() { return altoSuperBomba; }
	void setAltoSuperBomba(int _altoSuperBomba) { altoSuperBomba = _altoSuperBomba; }

	int getAnchoSuperBomba() { return anchoSuperBomba; }
	void setAnchoSuperBomba(int _anchoSuperBomba) { anchoSuperBomba = _anchoSuperBomba; }

	int getPosicionX() { return posicionX; }
	void setPosicionX(int _posicionX) { posicionX = _posicionX; }

	int getPosicionY() { return posicionY; }
	void setPosicionY(int _posicionY) { posicionY = _posicionY; }

	int getExplosion() { return explosion; }
	void setExplosion(int _explosion) { explosion = _explosion; }

};

