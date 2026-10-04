#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main(){
int u,c;
clrscr();
cout<<"1.rock\n2.paper\n3.sscissor\n";
cout<<"enter your choice";
cin>>u;
c=rand()%3+1;
cout<<"computer choice:"<<c<<endl;
if(u==c)
cout<<" draw";
else if((u==1&&c==3)||
(u==2&&c==1)||(u==3&&c==2))
cout<<"you win";
else
cout<<"computer wins";
getch();
}