#include "GameActor.h"

TilesGraph* GameActor::tilesGraph = nullptr;

GameActor::GameActor() :GameObject() {
	posicionX = 0;
	posicionY = 0;
	imagenX = 0;
	imagenY = 0;
	ancho = 34;
	alto = 34;

	solido = true;
	indestructible = false;
	visible = true;
	movil = false;
	enMovimiento = false;
	aereo = false;
	terrestre = true;
	subterraneo = false;

	velocidad = 1;
	energia = 100;
	vidas = 3;

	textura = nullptr;
	tileActual = nullptr;
	tileSiguiente = nullptr;
	tileSalto = nullptr;
	direccionActual = MOVE_DIRECTION_NONE;
	direccionSiguiente = MOVE_DIRECTION_NONE;

	colisionador = new SDL_Rect({ 0, 0, ancho, alto });
}


GameActor::GameActor(Texture* _textura, Tile* _tileActual) :GameObject() {
	posicionX = 0;
	posicionY = 0;
	imagenX = 0;
	imagenY = 0;
	ancho = 34;
	alto = 34;

	solido = true;
	indestructible = false;
	visible = true;
	movil = false;
	enMovimiento = false;
	aereo = false;
	terrestre = true;
	subterraneo = false;

	velocidad = 1;
	energia = 100;
	vidas = 3;

	textura = _textura;
	tileActual = _tileActual;
	tileSiguiente = nullptr;
	tileSalto = nullptr;
	direccionActual = MOVE_DIRECTION_NONE;
	direccionSiguiente = MOVE_DIRECTION_NONE;
	colisionador = new SDL_Rect({ posicionX, posicionY, ancho, alto });
}

void GameActor::render()
{
	if (visible) {
		SDL_Rect* cuadroAnimacion = new SDL_Rect({ imagenX, imagenY, getAncho(), getAlto() });
		textura->render(getPosicionX(), getPosicionY(), cuadroAnimacion);
	}
}

bool GameActor::revisarColision(const SDL_Rect* _otroColisionador)
{
	if (_otroColisionador->x > colisionador->x + colisionador->w) {
		return false;
	}

	if (_otroColisionador->y > colisionador->y + colisionador->h) {
		return false;
	}

	if (_otroColisionador->x + _otroColisionador->w < colisionador->x) {
		return false;
	}

	if (_otroColisionador->y + _otroColisionador->h < colisionador->y) {
		return false;
	}

	return true;
}

bool GameActor::tratarDeMover(MoveDirection _direccionNueva) {

	Tile* tileDestino = nullptr;

	switch (_direccionNueva)
	{
	case MOVE_DIRECTION_ARRIBA:
		tileDestino = tilesGraph->getTileEn(tileActual->getPosicionTileX(), tileActual->getPosicionTileY() - 1);
		break;
	case MOVE_DIRECTION_ABAJO:
		tileDestino = tilesGraph->getTileEn(tileActual->getPosicionTileX(), tileActual->getPosicionTileY() + 1);
		break;
	case MOVE_DIRECTION_IZQUIERDA:
		tileDestino = tilesGraph->getTileEn(tileActual->getPosicionTileX() - 1, tileActual->getPosicionTileY());
		break;
	case MOVE_DIRECTION_DERECHA:
		tileDestino = tilesGraph->getTileEn(tileActual->getPosicionTileX() + 1, tileActual->getPosicionTileY());
		break;
	}

	// Si tileDestino es nullptr, no se puede avanzar
	if (tileDestino == nullptr) {
		setTileSiguiente(nullptr);
		return false;
	}

	if (tileDestino->getMuroMetal() != nullptr)
	{
		setTileSiguiente(nullptr);
		return false;
	}

	if (tileDestino->getMuroCeramica() != nullptr)
	{
		setTileSiguiente(nullptr);
		return false;
	}

	setTileSiguiente(tileDestino);
	return true;
}