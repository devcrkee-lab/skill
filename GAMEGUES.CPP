#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main(){
int guess,number;
clrscr();
number=rand()%10+1;
cout<<" casino number guessing game\n";
cout<<" guess a number between 1 and 10:";
cin>>guess;
if(guess==number)
cout<<"you win";
else
cout<<"you loose! the number was"<< number;
getch();
}