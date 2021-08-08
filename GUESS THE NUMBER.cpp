#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	char enter;
	printf("\n\n\n\n\t\t\t\t******** GUESS THE NUMBER ********\n\n\n\n");
	printf("\t\t\t\t      Press ENTER to continue\n");
	scanf("%c",&enter);
	system("cls");
	printf("INSTRUCTIONS:\n");
	printf("1)Try to guess the number between 1-50.\n");
	printf("2)If your guess is correct, then you will win the game.\n");
	printf("3)If your guess is wrong, then the computer will display you some hints that, whether the number is:\n");
	printf("  a)Lower to the number you guessed. (or)\n");
	printf("  b)Higher to the number you guessed.\n");
	printf("\nNOTE:1)You have only 5 attempts.\n");
	printf("     2)Attempts are represented by a star(*).");
	printf("\n\n\n\n\t\t\t\t      Press ENTER to continue\n");
	scanf("%c",&enter);
	system("cls");
	printf("\n\n\n\n\t\t\t\tALL THE BEST!\n\n\n\n");
	printf("\t\t\t    Press ENTER to continue\n");
	scanf("%c",&enter);
	system("cls");
	jump:
	     int number,guess,no_of_guesses=1,flag=0;
		 srand(time(0));
		 number=rand()%50+1;
		 printf("Guess a number in between 1-50---->\n");
		 int n=5,i;
	 	 do{
			printf("\nGuess a number:\t");
			for(i=n;i>=1;i--){
				printf(" * ");
			}
			printf("\n");
			scanf("%d",&guess);
			if(guess>number){
				printf("Lower number please!\n");
			}
			if(guess<number){
				printf("Higher number please!\n");
			}
			if(guess==number){
				flag=1;
				break;
			}
		no_of_guesses++;
		n--;
		}while(no_of_guesses<=5);
		if(flag==0){
			system("cls");
			printf("\n\n\n\n\t\t\t\t!! YOU LOST !!\n\n\n\n");
		}
		else{
			system("cls");
			printf("\n\n\n\t\t\tCONGRATS..! YOU WON !!.\n");
		}
	printf("\nDo you want to try again (y/n):");
	char a;
	scanf(" %c",&a);
	if(a=='y'){
		goto jump;
	}
	else{
		system("cls");
		printf("\n\n\n\n\t\t\t\t----------THANK YOU !----------\n\n\n\n");
	}
	return 0;
}
