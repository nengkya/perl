#include "stdio.h"


struct entity {

    char * name;
    int healthPoints;
    int attackPower;
    int defense;

};


void printfStatus(struct entity * entity) {

    printf("\n%-8s health points = %3d"  , (*entity).name, (*entity).healthPoints);
    printf("\n%-8s attack power  = %3d"  , (*entity).name, (*entity).attackPower );
    printf("\n%-8s defense       = %3d\n", (*entity).name, (*entity).defense     );

}


int main() {

    struct entity attacker;
    struct entity enemy;

    attacker.name         = "attacker";
    attacker.healthPoints = 100;
    attacker.attackPower  =  50;
    attacker.defense      =  10;

    enemy.name            = "enemy";
    enemy.healthPoints    = 150;
    enemy.attackPower     =  25;
    enemy.defense         =   5;

    printfStatus(&attacker);
    printfStatus(&enemy   );
    printf("\n");

}
