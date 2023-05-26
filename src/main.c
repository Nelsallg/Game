#include <SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include "./include/init.h"

int main(int argc, char **argv)
{
    init();
    atexit(close);
    while (1)
    {
       
    }
    
    // SDL_Quit();
    return EXIT_SUCCESS; //return 0; 
}