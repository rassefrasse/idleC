#include <stdio.h>
#include <windows.h>
#include <string.h>

struct Monster{ ////experimenting with structs to streamline the process of creating enemies
    int hp;
    int atk;
    int loot;
    char name[20];
};

int main(){

    struct Monster monster[3];
    strcpy(monster[0].name, "Goblin");
    strcpy(monster[1].name, "Orc");
    strcpy(monster[2].name, "Grizzly Bear");

    monster[0].hp = 10;
    monster[1].hp = 15;
    monster[2].hp = 15;

    monster[0].atk = 1;
    monster[1].atk = 2;
    monster[2].atk = 4;

    monster[0].loot = 5;
    monster[1].loot = 7;
    monster[2].loot = 10;

    int playerLife = 50;
    int playerDamage = 3;
    int remainingHealthPlayer;
    int remainingHealthMonster;

    int playerGold = 0;

    int i = 0;

    char initiateGame;
    
    printf("Would you like to play? (Y/n)\n");
    scanf("%c", &initiateGame);

    if (initiateGame == 'Y' || initiateGame == 'y'){

    while ((playerLife > 0) && (monster[i].hp > 0)){
        playerLife = playerLife - monster[i].atk;
        monster[i].hp = monster[i].hp - playerDamage;
        printf("You have taken %d damage and your health is now %d\n", monster[i].atk, playerLife );
        printf("The goblin has taken %d damage and their health is now %d\n", playerDamage, monster[i].atk );
        Sleep(1000);
    } 
    
    if (playerLife <= 0){
        printf("You've been defeated!");
    } else if (monster[i].hp <= 0){
        printf("You've defeated the %c!\n", monster[i].name);
        playerGold = playerGold + monster[i].loot;
        printf("You've earned %d gold! and you now have a total of %d gold!\n", monster[i].loot, playerGold);
        }

} else {
    printf("Thank you for playing!");
}

    return 0;
}