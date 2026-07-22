#include "stdio.h"
#include <stdlib.h>


struct entity {

    char * name;

    int healthPower;
    int attackPower;
    int defense;
    int totalHealthPower;

};


int main() {

    int playing = true;

    struct entity attacker;
    struct entity enemy;

    attacker.name = "Attacker";
    attacker.healthPower = 100;
    attacker.attackPower = 250;
    attacker.defense     =  10;
    attacker.totalHealthPower = attacker.healthPower + attacker.defense;

    enemy.name = "Enemy";
    enemy.healthPower = 150;
    enemy.attackPower = 125;
    enemy.defense     =   5;
    enemy.totalHealthPower = enemy.healthPower + enemy.defense;

    while (playing) {

        printf("\nenemy health power          = %3d", enemy.healthPower);

        printf("\nenemy defense               = %3d", enemy.defense);

        printf("\ntotal enemy health power    = %3d", enemy.totalHealthPower);

        if (attacker.totalHealthPower <= 0 && enemy.totalHealthPower <= 0) {

            printf("\nattacker and enemy both die !\n\n");
            break;

        }

        if (enemy.totalHealthPower <= 0) {

            printf("\nattacker win !\n\n");
            break;

        }

        if (attacker.totalHealthPower <= 0) {

            printf("\nenemy win !\n\n");
            break;

        }

        printf("\n%s hit %s with %3d attack power", attacker.name, enemy.name, attacker.attackPower);
        printf("\n%s hit %s with %3d attack power\n", enemy.name, attacker.name, enemy.attackPower);

        attacker.totalHealthPower = abs(attacker.totalHealthPower) - enemy   .attackPower;

        if (attacker.totalHealthPower <= 0) attacker.totalHealthPower = 0;

        enemy   .totalHealthPower = abs(enemy   .totalHealthPower) - attacker.attackPower;

    }

}
