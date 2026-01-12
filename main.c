#include "initialize.h"
#include "game.h"
#include "pokemon.h"
#include <time.h>

int main(){
    srand(time(NULL));
    Type Types[18];
    Move Moves[486];
    Pokemon Pokemons[1015];
          
    Player Player1;
    Player Player2;

    initialize(Types,Moves,Pokemons);
    initializePlayer(Pokemons,&Player1, &Player2);
    game(&Player1,&Player2);

    return 0;
}

