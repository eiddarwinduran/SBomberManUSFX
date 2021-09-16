#pragma once
class Muro
{
private:

	int altoMuro;
	int anchoMuro;

public:

	int getAltoMuro() { return altoMuro; }
	void setAltoMuro(int _altoMuro) { altoMuro = _altoMuro; }

	int getAnchoMuro() { return anchoMuro; }
	void setAnchoMuro(int _anchoMuro) { anchoMuro = _anchoMuro; }

	void ParedIndestructible();
	void ParedDestructible();
};

