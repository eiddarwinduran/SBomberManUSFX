#pragma once
class Bomba
{
private:
	int tamaņoBomba;
	int tiempoExplosion;


public:

	int getTamaņoBomba() { return tamaņoBomba; }
	void setTamaņoBomba(int _tamaņoBomba) { tamaņoBomba = _tamaņoBomba; }

	int getTiempoExplosion() { return tiempoExplosion; }
	void setTiempoExplosion(int _tiempoExplosion) { tiempoExplosion = _tiempoExplosion; }

	void explotar();

};

