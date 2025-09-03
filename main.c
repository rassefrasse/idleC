#include <stdio.h>
#include <windows.h>

int main(){

    char initiateGame;
    
    printf("Would you like to play? (Y/n)\n");
    scanf("%c", &initiateGame);

    if (initiateGame == 'Y' || initiateGame == 'y'){

    

    int playerLife = 10;
    int playerDamage = 2;
    int monsterLife = 5;
    int monsterDamage = 1;
    int monsterGold = 3;
    int remainingHealthPlayer;
    int remainingHealthMonster;

    int playerGold = 0;

    while ((playerLife > 0) && (monsterLife > 0)){
        playerLife = playerLife - monsterDamage;
        monsterLife = monsterLife - playerDamage;
        printf("You have taken %d damage and your health is now %d\n", monsterDamage, playerLife );
        printf("The goblin has taken %d damage and their health is now %d\n", playerDamage, monsterLife );
        Sleep(1000);
    } 
    
    if (playerLife <= 0){
        printf("You've been defeated!");
    } else if (monsterLife <= 0){
        printf("You've defeated the goblin!\n");
        playerGold = playerGold + monsterGold;
        printf("You've earned %d gold! and you now have a total of %d gold!\n", monsterGold, playerGold);
        }

} else {
    printf("Thank you for playing!");
}

    return 0;
}