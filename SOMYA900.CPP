#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int tAmtdep=0,tAmtwith=0,tAmtran=0,Amtdep,Amtwith,Amtran,toamtt,toamt;
char x[25],z[11],n[30],g[20],f[15],t[25],s[11];
char gender;
int age,y,m,d;
int list();
void deposit();
void withdraw();
void transfer();
void chq();
void trn();
void login();
void main()
{
void pdtl(void);
void otpt(void);
void login(void);
clrscr();
login();
pdtl();
while(1)
{
switch(list())
{
 case 1:
       deposit();
       toamt=Amtdep+toamt;
       break;
 case 2:
      withdraw();
      if(Amtwith<=toamt)
      toamt=toamt-Amtwith;
      break;
 case 3:
      transfer();
      if(Amtran<=toamt)
      toamt=toamt-Amtran;
      break;
 case 4:
      clrscr();
      trn();
      break;
 case 5:
      clrscr();
      chq();
      printf("\t\t\n**************THANKS FOR VISITING US*******************\n");
      printf("\nPress enter to EXIT");
      getch();
      exit(0);
 default:
      printf("\tInvalid!!!!\n");
      break;
    }
   getch();
}
}
int list()
{
int ch;
clrscr();
printf("\t\t******List*****\n");
printf("\n\t1.Deposit Amount\n");
printf("\t2.Withdraw Amount\n");
printf("\t3.Transfer Amount\n");
printf("\t4.Current Balance\n");
printf("\t5.Exit\n");
printf("\tEnter your choice: ");
scanf("%d",&ch);
return(ch);
}
void pdtl()
{
clrscr();
printf("\tPersonal Details\n");
printf("Mention your Full Name:");
gets(t);
strupr(t);
printf("Mention your A\c number:");
gets(s);
strupr(s);
printf("Choose your gender M or F:");
scanf("%c",&gender);
printf("Mention your Date of Birth DD/MM/YYYY:");
scanf("%d%d%d",&d,&m,&y);
printf("Mention your Age:");
scanf("%d",&age);
printf("\n\tSuccessfully filled\nPress enter to proceed......\n");
}
void otpt()
{
printf("\t\t\t******CHECK DETAILS******\n");
printf("You are ");
puts(t);
printf("Your A\c number ");
puts(s);
if(gender=='M' || gender=='m')
{
printf("You are Male\n");
}
else if(gender=='F' || gender=='f')
{
printf("You are Female\n");
}
else
{
printf("Invalid!!\n");
}
printf("Your DOB %d/%d/%d\n",d,m,y);
if(age<=12)
{
printf("You are a kid of age %d\n",age);
}
else if(age>12 && age<=19)
{
printf("You are teenager of age %d\n",age);
}
else if(age>19 && age<=40)
{
printf("You are Young Citizen of age %d\n",age);
}
else if(age>40 && age<=60)
{
printf("You are Middle ager of age %d\n",age);
}
else if(age>60 && age<=110)
{
printf("You are Senior Citizen of age %d\n",age);
}
else
{
printf("Invalid Age!!!\n");
}
getch();
}
void deposit()
{
clrscr();
printf("\t\t\tBank Deposits\n");
printf("Mention your deposit amount:");
scanf("%d",&Amtdep);
toamtt=Amtdep+toamtt;
tAmtdep=tAmtdep+Amtdep;
printf("\n\t\t***Successfull Deposition***\n");
printf("You have balance of %dRs",toamtt);
}
void withdraw()
{
clrscr();
printf("\t\t\tBank Withdraw\n");
printf("Mention your Withdraw amount:");
scanf("%d",&Amtwith);
if(Amtwith<=toamtt)
{
toamtt=toamtt-Amtwith;
tAmtwith=tAmtwith+Amtwith;
printf("\nWithdrawn successfull!!!\n");
printf("Balance remain %dRs",toamtt);
}
else if(tAmtdep==0)
{
printf("\ndeposit some balance!!!");
getch();
deposit();
}
else
{
printf("\nInsuficient account!!!");
}
}
void transfer()
{
clrscr();
printf("\t\t\tBank Transfer\n");
printf("Mention your Transfer amount:");
scanf("%d",&Amtran);
if(Amtran<=toamtt)
{
toamtt=toamtt-Amtran;
tAmtran=tAmtran+Amtran;
printf("\tDetails of recevier\n");
printf("Recevier's First Name:");
scanf("%s",&f);
printf("Recevier's last Name:");
scanf("%s",&g);
strcat(f,g);
strupr(f);
strupr(g);
printf("Mention recevier's A\c number:");
scanf("%s",&n);
strupr(n);
printf("\n\t\t*****Transfered Sucessfull!!!*****\n");
printf("To A\c number %s\n",n);
printf("To ");
puts(f);
printf("Transfered %d\n",Amtran);
printf("\nBalance remain %dRs",toamtt);
}
else if(tAmtdep==0)
{
printf("\ndeposit some balance!!!");
getch();
deposit();
}
else
{
printf("\nInsufficient Amount");
}
}
void chq()
{
void otpt(void);
void trn(void);
clrscr();
otpt();
trn();
}
void trn()
{
printf("\t\t********Transaction Details********\n");
printf("Deposited amount %dRs\n",tAmtdep);
printf("Withdrawn amount %dRs\n",tAmtwith);
printf("Transfered amount %dRs\n",tAmtran);
toamt=toamtt;
printf("Overall Balance in Account %dRs\n",toamt);
}
void login()
{
char pass[10];
clrscr();
printf("\t\tMADE EASY TRANSACTION\n");
printf("Enter your password:");
gets(pass);
if(strcmp(pass,"bank12345")==0)
{
printf("Login Successfull!!\nPress any key to proceed....\n");
getch();
}
else
{
printf("Invalid!!!\nTry again later....\n");
exit(0);
}
}

