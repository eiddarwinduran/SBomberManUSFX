#pragma once
class Enemigo
{
private: 
	int anchoEnemigo;
	int altoEnemigo;
	int velocidad;
	int posicionX;
	int posicionY;

public:
	int getAnchoEnemigo() { return anchoEnemigo; }
	void setAnchoEnemigo(int _anchoEnemigo) { anchoEnemigo = _anchoEnemigo; }

	int getAlto() { return altoEnemigo; }
	void setAlto(int _altoEnemigo) { altoEnemigo = _altoEnemigo; }

	int getVelocidad() { return velocidad; }
	void setVelocidad(int _velocidad) { velocidad = _velocidad; }

	int getPosicionX() { return posicionX; }
	void setPosicionX(int _posicionX) { posicionX = _posicionX; }

	int getPosicionY() { return posicionY; }
	void setPosicionY(int _posicionY) { posicionY = _posicionY; }

	void Morir();
	void Moverce();

};

