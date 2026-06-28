#ifndef MANEVER_USECASE
#define MANEVER_USECASE
#include "Domain/GameState.h"

class ManeverUseCase{

    public:
    void execute(Hero & ,int newnode,std::vector<int> reachableNodes);
    std::vector<int> reachableNodesCurrentHero(Graph map,Hero hero,int Enemynode)const;
};

#endif /* MANEVER_USECASE */
