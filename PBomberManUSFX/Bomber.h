#pragma once
class Bomber
{
private:
	int anchoAvatar;
	int altoAvatar;
	int velocidadAvatar;
	int vidas;
	int posicionX;
	int posicionY;

public:
	int getAnchoAvatar() { return anchoAvatar; }
	void setAnchoAvatar(int _anchoAvatar) { anchoAvatar = _anchoAvatar; }

	int getAltoAvatar() { return altoAvatar; }
	void setAltoAvatar(int _altoAvatar) { altoAvatar = _altoAvatar; }

	int getVelocidadAvatar() { return velocidadAvatar; }
	void setVelocidadAvatar(int _velocidadAvatar) { velocidadAvatar = _velocidadAvatar; }

	int getVidas() { return vidas; }
	void setVidas(int _vidas) { vidas = _vidas; }

	int getPosicionX() { return posicionX; }
	void setPosicionX(int _posicionX) { posicionX = _posicionX; }

	int getPosicionY() { return posicionY; }
	void setPosicionY(int _posicionY) { posicionY = _posicionY; }

	void Morir();
	void Correr();
	void Mover();
	void ColocarBomba();
	void Activar();

};

//