#include<stdio.h>
#include<conio.h>
void main()
{
int n;
printf("  WILL BYTE GET THE FOOD WHICH HE WANTS ENTER ANY  NUMBER  FROM 1 TO 4 TO SEE HIS LUCK :- ");
scanf("%d",&n);
switch(n)
{
case 1 :  printf("FOOD ITEM :- PASTA");
               printf("\n price :- 179 ");
               break; 
case 2: printf("  FOOD ITEM :- PIZZA");
               printf(" price :- 239 ");
               break; 
case 3: printf("  FOOD ITEM :- SANDWICH");
               printf(" price :- 149 ");
               break; 
case 4: printf("  FOOD ITEM :- FRENCH FRIES");
               printf(" price :- 99 ");
                break; 
default : printf("  BYTES THEY WANT YOU TO BE HUNGRY");
                break;
}
getch();
}
