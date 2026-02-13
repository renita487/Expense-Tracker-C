#include<stdio.h>
#include<stdlib.h>
struct expense{
char item[50];
float amt;
};
int main()
{
struct expense e;
int choice;
float total=0;
FILE *fp;
do{
printf("\n---Expense Tracker---\n");
printf("1.Add Expense");
printf("\n2.View Expenses");
printf("\n3.Exit");
printf("Enter choice:");
scanf("%d",&choice);
switch(choice){
case 1:
fp=fopen("expense.txt","a");
printf("\nEnter item name:");
scanf("%s",e.item);
printf("\nEnter amount:");
scanf("%f",&e.amt);
fprintf(fp,"%s %.2f\n",e.item,e.amt);
fclose(fp);
printf("Expense added successfully....");
break;
case 2:
fp=fopen("expense.txt","r");
printf("\n---Expenses---\n");
while(fscanf(fp,"%s %f",e.item,&e.amt)!=EOF){
printf("\nItem: %s | Amount: %.2f",e.item,e.amt);
total+=e.amt;
}
printf("\nTotal Spending: %.2f",total);
fclose(fp);
break;
case 3:
printf("\nExiting program....");
break;
default:
printf("Invalid choice");
}
}
while(choice!=3);
return 0;}
