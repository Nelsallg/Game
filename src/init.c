#include <SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include "./include/init.h"

Jeu jeu;
void init()
{
    
    if(SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        SDL_Log("ERREUR : Initialisation SDL > %s\n", SDL_GetError());
        exit(EXIT_FAILURE);
    }
    jeu.gWindow = SDL_CreateWindow("Main", SDL_WINDOWPOS_CENTERED,  SDL_WINDOWPOS_CENTERED, 800, 600, 0);
    if(jeu.gWindow  == NULL)
    {
        SDL_Log("ERREUR : Creation de la fenetre echouée > %s\n", SDL_GetError());
        exit(EXIT_FAILURE);
    }
    jeu.gRenderer = SDL_CreateRenderer(jeu.gWindow, -1, SDL_RENDERER_ACCELERATED);
    if(jeu.gRenderer == NULL){
        SDL_Log("ERREUR : Creation du rendu echouée > %s\n", SDL_GetError());
    }
}

void close()
{
    if(jeu.gRenderer != NULL){
        SDL_DestroyRenderer(jeu.gRenderer);
    }
    if(jeu.gWindow != NULL){
        SDL_DestroyWindow(jeu.gWindow);
    }
    SDL_Quit();
}