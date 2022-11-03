#include <stdio.h>
#include <stdlib.h>
#include <cstdio>

int main()
{
	const char* heroName = "Ness";
	int heroAttackPower = 12;
	int heroHp = 38;
	int heroPsi = 16;
	int healSpellcost = 4;
	int healSpellPower = 35;
	int pkStarstormPower = 50;
	int pkStarstormCost = 16;

	const char* narrarator = "The Creator";
	int narratorPower = 150;


	const char* monsterName = "Funky Hippie";
	int monsterHp = 36;
	int monsterPower = 10;
	int monsterSpecial = 4;
	int monsterHealPower = 10;
	
	printf("A %s drunkely draws near!\n", monsterName);
	printf("\n");

	while(monsterHp > 0 && heroHp > 0)
	{ 
		printf("=======\n");
		printf("[%s HP: %d, PSI %d]\n", heroName, heroHp, heroPsi);
		printf("[%s HP: %d, %d]\n", monsterName, monsterHp, monsterSpecial);
		printf("\n");

		printf("Command?\n");
		printf("1 -> Attack(No PSI Cost)\n");
		printf("2 -> Heal (PSI Cost: %d)\n", healSpellcost);
		printf("3 -> PKStarstorm (PSI Cost: %d) \n", pkStarstormCost);
		printf(">");

		int choice = 0;
		scanf_s("%d", &choice);
		printf("\n");

		////////////PLAYER INPUT/////////////////////////
		if (choice == 1)
		{
			
			printf("\n%s attacks!\n", heroName);
			printf("\nThe %s' Hit Points decreased by %d\n", monsterName, heroAttackPower);
			printf("\n");

			monsterHp = monsterHp - heroAttackPower;
		}
		else if (choice == 2)
		{
			if (heroPsi >= healSpellcost)
			{
				printf("\n%s casts Heal!\n", heroName);
				printf("\n%s' Hit Points have increased by %d", heroName, healSpellPower);
				printf("\n");
				heroHp = heroHp + healSpellPower;
				heroPsi = heroPsi - healSpellcost;
			}
			else 
			{
				printf("You do not have enough PSI to cast that.");
			}
			
		}	
		else if (choice == 3)
		{
			if (heroPsi >= pkStarstormCost)
			{
				printf("\n%s casts PK StarStorm!\n", heroName);
				printf("\n%s' Hit Points have decreaseed by %d", monsterName, pkStarstormPower);
				printf("\n");
				monsterHp = monsterHp - pkStarstormPower;
				heroPsi = heroPsi - pkStarstormCost;
			}
			else
			{
				printf("You do not have enough PSI to cast that.");
			}
			printf("\n%s casts PK StarStorm!\n", heroName);
			printf("\n%s' Hit Points have decreaseed by %d", heroName, healSpellPower);
			printf("\n");
		}
		else if (choice == 69)
		{
			printf("You think you're sooooooooooooooo funny.\n");
			printf("\nWell if you think that's funny how about you restart the game!!!\n");
			printf("%s deals a fatal blow!\n", narrarator);
			printf("%s' Hit Points decreased by %d!\n", heroName, narratorPower);
			printf("\n");
			heroHp = heroHp - narratorPower;
		}
		else 
		{
			printf("HEY STOP THAT. PLAY THE GAME RIGHT!!! >:(\n");
			printf("\nPress either 1 or 2 to proceed with the battle!!!\n");
		    monsterPower = 5;
			printf("\n");
		}
		//////////////////
		//Monster Turn//
		//////////////////

		if (monsterHp > 15)
		{
			
		}
		else if (monsterHp <= 12)
		{
			if (monsterSpecial >= healSpellcost)
			{
				printf("\n%s casts Heal!\n", monsterName);
				printf("\n%d' Hit Points have increased by %d", monsterHp, monsterHealPower);
				printf("\n");
				monsterHp = monsterHp + monsterHealPower;
				monsterSpecial = monsterSpecial - healSpellcost;
			}
			else
			{
				printf("The %s attacks!\n", monsterName);
				printf("%s loses %d health points!\n", heroName, monsterPower);
				printf("\n");
				heroHp = heroHp - monsterPower;
			}
		}
	}
	
	if (heroHp > 0 && monsterHp <= 0)
	{

		printf("***********\n");
		printf("You fought off your first  drunk %s, congratulations!\n", monsterName);
		printf("You gained 20 followers on Instagram!\n");
		printf("\n");
	}
	else if (heroHp < -30)
	{
		printf("You fool, how dare you try to resist the program!!!\n");
		printf("Now you are forced to wonder the void forever\n");
		printf("MWAHAHAHAHAHAHA");
		printf("\n");
	}
	else if (monsterHp > 0)
	{
		printf("!!!!!!!!!!!!!!!!!!!!!!!\n");
		printf("You have perished!\n");
		printf("That wasn't very cash money of you, try again!!!\n");

	}
	system("pause");
	return 0;
}