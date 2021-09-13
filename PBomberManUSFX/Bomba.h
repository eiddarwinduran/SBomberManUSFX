#pragma once
class Bomba
{
private:
	int tamañoBomba;
	int tiempoExplosion;


public:

	int getTamañoBomba() { return tamañoBomba; }
	void setTamañoBomba(int _tamañoBomba) { tamañoBomba = _tamañoBomba; }

	int getTiempoExplosion() { return tiempoExplosion; }
	void setTiempoExplosion(int _tiempoExplosion) { tiempoExplosion = _tiempoExplosion; }

	void explotar();

};

