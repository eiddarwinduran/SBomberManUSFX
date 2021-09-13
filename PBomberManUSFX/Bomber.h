#pragma once
class Bomber
{
private:
	int anchoAvatar;
	int altoAvatar;
	int velocidadAvatar;
	int vidas;
public:
	int getAnchoAvatar() { return anchoAvatar; }
	void setAnchoAvatar(int _anchoAvatar) { anchoAvatar = _anchoAvatar; }

	int getAltoAvatar() { return altoAvatar; }
	void setAltoAvatar(int _altoAvatar) { altoAvatar = _altoAvatar; }

	int getVelocidadAvatar() { return velocidadAvatar; }
	void setVelocidadAvatar(int _velocidadAvatar) { velocidadAvatar = _velocidadAvatar; }

	int getVidas() { return vidas; }
	void setVidas(int _vidas) { vidas = _vidas; }

	void Morir();
	void Correr();
	void Mover();
	void ColocarBomba();
	void Activar();

};

