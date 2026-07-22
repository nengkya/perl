#include "stdio.h"


struct entity {

    char * name;
    int healthPoints;
    int attackPower;
    int defense;

};


void printfStatus(struct entity * entity) {

    printf("%s", (* entity).name, (* entity).healthPoints);




}


int main() {

    struct entity attacker;

    attacker.name         = "attacker";
    attacker.healthPoints = 100;
    attacker.attackPower  =  50;
    attacker.defense      =  10;

    printf("\n%s health points = %3d", attacker.name, attacker.healthPoints);
    printf("\n%s attack power  = %3d", attacker.name, attacker.attackPower );
    printf("\n%s defense       = %3d", attacker.name, attacker.defense     );
    printf("\n\n");

    printfStatus(&attacker);

    /*
    attacker health points = 100
    attacker attack power  =  50
    attacker defense       =  10

    enemy health points    = 150
    enemy attack power     =  25
    enemy defense          =   5
    */





}
