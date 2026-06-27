#ifndef HERO_REPOSITORY
#define HERO_REPOSITORY
#include "Domain/Entities/Hero.h"
class HeroRepository{

    public:
        Hero CreateDeracula();
        Hero CreateHolmes();
};

#endif /* HERO_REPOSITORY */
