#pragma once
class Puntaje
{
private:
	int tiempo;
	int puntaje;

public:
	int getTiempo() { return tiempo; }
	void setTiempo(int _tiempo) { tiempo = _tiempo; }

	int getPuntaje() { return puntaje; }
	void serPuntaje(int _puntaje) { puntaje = _puntaje; }
};

