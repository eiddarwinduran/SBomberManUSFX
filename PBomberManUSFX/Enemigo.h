#pragma once
class Enemigo
{
private: 
	int anchoEnemigo;
	int altoEnemigo;
	int velocidad;
public:
	int getAnchoEnemigo() { return anchoEnemigo; }
	void setAnchoEnemigo(int _anchoEnemigo) { anchoEnemigo = _anchoEnemigo; }

	int getAlto() { return altoEnemigo; }
	void setAlto(int _altoEnemigo) { altoEnemigo = _altoEnemigo; }

	int getVelocidad() { return velocidad; }
	void setVelocidad(int _velocidad) { velocidad = _velocidad; }

	void Morir();
	void Moverce();

};

