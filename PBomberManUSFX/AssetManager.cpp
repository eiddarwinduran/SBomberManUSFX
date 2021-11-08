#include <SDL_image.h>
#include <iostream>

#include "AssetManager.h"

    void AssetManager::load(SDL_Renderer* renderer)
    {
        // load font
        loadFont();
        // load textures
        loadTexture(renderer, Texture::MenuBack, "resources/menubomber.png");
        
    }

    std::shared_ptr<TTF_Font> AssetManager::getFont() const
    {
        return font;
    }

    std::shared_ptr<SDL_Texture> AssetManager::getTexture(Texture texture)
    {
        return textures[texture];
    }

  /*  std::shared_ptr<Mix_Music> AssetManager::getMusic(MusicEnum music)
    {
        return musics[music];
    }*/

  /*  std::shared_ptr<Mix_Chunk> AssetManager::getSound(SoundEnum sound)
    {
        return sounds[sound];
    }*/

    void AssetManager::loadFont()
    {
        // load font
        font = std::shared_ptr<TTF_Font>(TTF_OpenFont("assets/font.ttf", 32), TTF_CloseFont);
        if(!font)
        {
            std::cout << "TTF_OpenFont Error: " << TTF_GetError() << std::endl;
        }
    }

    void AssetManager::loadTexture(SDL_Renderer* renderer, Texture texture, const std::string& filePath)
    {
        textures[texture] =
            std::shared_ptr<SDL_Texture>(IMG_LoadTexture(renderer, filePath.c_str()), SDL_DestroyTexture);
        if(!textures[texture])
        {
            std::cout << "IMG_LoadTexture Error: " << IMG_GetError() << std::endl;
        }
    }

    /*void AssetManager::loadMusic(MusicEnum music, const std::string& filePath)
    {
        musics[music] = std::shared_ptr<Mix_Music>(Mix_LoadMUS(filePath.c_str()), Mix_FreeMusic);
        if(!musics[music])
        {
            std::cout << "loadMusic Error: " << Mix_GetError() << std::endl;
        }
    }*/

    /*void AssetManager::loadSound(SoundEnum sound, const std::string& filePath)
    {
        sounds[sound] = std::shared_ptr<Mix_Chunk>(Mix_LoadWAV(filePath.c_str()), Mix_FreeChunk);
        if(!sounds[sound])
        {
            std::cout << "loadSound Error: " << Mix_GetError() << std::endl;
        }
    }*/
 // namespace bomberman
