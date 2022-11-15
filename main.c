#include <stdio.h>
#include <string.h>
int check(char symbol);
int main (void)
{
	int times;
	int answer=0;
	char symbol;
	printf("How many number to calculate:"); scanf("%d",&times);
	int num;
	for (int i = 0; i<times; i++)
	{
	    if (i == 0)
	    {
		    printf("Enter Number %d:",i+1); scanf("%d",&num);
		    answer += num;
	    }
	    if (i != 0)
		{
			do{
				printf("Enter a math symbol :"); scanf("\n %c",&symbol);
			}while(check(symbol) != 1);
		if (symbol == 43)
		{
		    printf("Enter Number %d:",i+1); scanf("%d",&num);
			answer += num;
		}
		else if(symbol == 45)
		{
		    printf("Enter Number %d:",i+1); scanf("%d",&num);
			answer -= num;
		}
		else if(symbol == 42)
		{
		    printf("Enter Number %d:",i+1); scanf("%d",&num);
			answer = answer*num;
		}
		else if(symbol == 47)
		{
		    printf("Enter Number %d:",i+1); scanf("%d",&num);
			answer = answer/num;
		}
		}
	}	
	printf("Answer = %d\n",answer);
	return 0;
}
int check(char symbol)
{
	char* symbols = "+-*/";
	for (int i = 0; i<4; i++)
	{
		if (symbols[i] == symbol)
		{
			return 1;
			break;
		}
	}
	return 0;
}
