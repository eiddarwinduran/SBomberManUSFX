#pragma once
class Bomba
{
private:
	int tama�oBomba;
	int tiempoExplosion;


public:

	int getTama�oBomba() { return tama�oBomba; }
	void setTama�oBomba(int _tama�oBomba) { tama�oBomba = _tama�oBomba; }

	int getTiempoExplosion() { return tiempoExplosion; }
	void setTiempoExplosion(int _tiempoExplosion) { tiempoExplosion = _tiempoExplosion; }

	void explotar();

};

