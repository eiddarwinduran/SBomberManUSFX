#pragma once
#include<iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <vector>

#include <SDL.h>
#include <SDL_image.h>

#include "AssetManager.h"
#include "SceneManager.h"
#include "StageScene.h"

#include "Bomber.h"
#include "MuroMetal.h"
#include "MapGenerator.h"
#include "KeyboardInput.h"
#include "TilesGraph.h"

using namespace std;

const int SCREEN_WIDTH = 850;
const int SCREEN_HEIGHT = 510;
  
class GameManager
{
private:
    //The window we'll be rendering to
    SDL_Window* gWindow;

    //The window renderer
    SDL_Renderer* gRenderer;
    SDL_Renderer* renderer = nullptr;

    //Current displayed texture
    SDL_Texture* gTexture = nullptr;

    SceneManager* sceneManager = nullptr;
    AssetManager* assetManager = nullptr;

    vector<GameObject*> actoresJuego;
    MapGenerator* generadorMapa;
    KeyboardInput* keyboardInput;


    SDL_Event evento;
    bool enEjecucion;

    TilesGraph* tilesGraphGM;

    SDL_Rect camera;

    bool isRunning = false;
    Uint32 lastTickTime = 0;

public:
    // Constructores & destructores
    GameManager();

    void stop();
    /**
     * @brief Get the Window Width
     *
     * @return int - window width
     */
    int getWindowWidth() const;
    /**
     * @brief Get the Window Height
     *
     * @return int - window height
     */
    int getWindowHeight() const;
    /**
     * @brief Get SDL2 Renderer
     *
     * @return SDL_Renderer* - SDL2 renderer
     */
    SDL_Renderer* getRenderer() const;
    /**
     * @brief Get Scene Manager reference
     *
     * @return SceneManager* - scene manager reference
     */
    SceneManager* getSceneManager() const;
    /**
     * @brief Get Asset Manager reference
     *
     * @return AssetManager* - asset manager reference
     */
    AssetManager* getAssetManager() const;

    // Metodos especializados
    bool onInit();
    bool loadContent();
    int onExecute();
    void onEvent(SDL_Event* _event);
    void onLoop();
    void onRender();
    void close();    
};
