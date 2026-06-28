#include "infrastructure/HeroRepository.h"

Hero HeroRepository::CreateDeracula(){
    Hero Deracula;
    Deracula.SetName("Deracula");
    Deracula.SetHP(13);
    Deracula.SetMove(2);
    Deracula.SetRange(1);
    
    return Deracula;

}
Hero HeroRepository::CreateHolmes(){

    Hero Holmes;
    Holmes.SetName("Holmes");
    Holmes.SetHP(16);
    Holmes.SetMove(2);
    Holmes.SetRange(1);
    
    return Holmes;
}
