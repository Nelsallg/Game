#ifndef STRUCT_H //On vérifie si la variable STRUCT_H existe déjà
#define STRUCT_H //Si non on la crée
#include <SDL.h>
typedef struct Jeu {
    SDL_Window *gWindow;
    SDL_Renderer *gRenderer;
} Jeu;
#endif