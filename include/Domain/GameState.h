#ifndef GAME_STATE
#define GAME_STATE
#include "Domain/Entities/Hero.h"
#include "Domain/Entities/Graph.h"

struct GameState{

    Hero Deracual;
    Hero Holmes;
    Graph map;
    Hero * CurrentHero;
    Hero * OpponentHero;
};


#endif /* GAME_STATE */
