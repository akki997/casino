#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
void draw_line(int n,char ch);
void rules();
void main()
{
int balanceamt,amt,no,dice;
char playername[80],ch;
clrscr();
draw_line(60,'=');
cout<<"\n\n\nEnter your Name Sir :";
cin>>playername;
cout<<"\n\nEnter the Deposit Amount you want to start playing the GAME:";
cin>>balanceamt;
do
{
clrscr();
draw_line(60,'=');
do
{
cout<<"\n\nYour Present Balance is : "<<balanceamt<<endl;
cout<<"\n\n"<<playername<<"\n\nEnter money you want to Bet";
cin>>amt;
if(amt>balanceamt)
cout<<"Your betting amount is more than your Current Balance!!!!\n\nPlease Re-Enter the Amount :-\n";
else
break;
}
while(1);
do{
cout<<"Enter your lucky number to Bet Between 1 to 12 : ";
cin>>no;
if(no<=0||no>12)
cout<<"Please check the No!!!! No. should be between 1 to 12\n\n Re-Enterr the No.\n";
else
break;
}
while(1);
randomize();
dice=random(12)+1;
if(dice==no)
{
cout<<"\n\n     GOOD Luck!!!! YOU WON Rs."<<amt*10;
balanceamt=balanceamt+amt*10;
}
else{
cout<<"Bad luck this time!!!! You lost Rs."<<amt;
balanceamt=balanceamt-amt;
}
cout<<"\n\n The Winning Number was:"<<dice;
cout<<"\n\n\t"<<playername<<"You have Rs."<<balanceamt<<endl;
cout<<"\n\n->Do you want to play more : (y/n)?";
cin>>ch;
} while(ch=='Y'||ch=='y');
draw_line(70,'+');
cout<<"\n\n THANKS FOR COME TO CASINO YOUR BALANCE AMOUNT IS RS."<<balanceamt;
getch();
 }
void draw_line(int n,char ch)
{
for(int i=0;i<n;i++)
cout<<ch;
}
void rules()
{
clrscr();
cout<<"\n\n";
draw_line(60,'-');
cout<<"\n\t\t rules of the game\n";
draw_line(60,'-');
cout<<"\n\t 1. choose any number between 1 to 12\n\t 2.if you win you will get 10 times money you bet\n\t 3.if you bet on wrong number you will lose your betting amount\n\n";
draw_line(60,'-');
cout<<endl;
}