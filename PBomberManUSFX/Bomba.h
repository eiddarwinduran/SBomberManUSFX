#pragma once
class Bomba
{
private:
	int altoBomba;
	int anchoBomba;
	int tiempoExplosion;


public:

	int getAltoBomba() { return altoBomba; }
	void setAltoBomba(int _altoBomba) { altoBomba = _altoBomba; }

	int getAnchoBomba() { return anchoBomba; }
	void setAnchoBomba(int _anchoBomba) { anchoBomba = _anchoBomba; }

	int getTiempoExplosion() { return tiempoExplosion; }
	void setTiempoExplosion(int _tiempoExplosion) { tiempoExplosion = _tiempoExplosion; }

	void explotar();

};

