#include<iostream.h>
void main(){
int num1,num2;
char op;
cout<<"enter the num1 and num2";
cin>>num1>>num2;
cout<<"enter the operator(+,-,*,/):";
cin>>op;
switch(op)
{
case'+':
cout<<num1 + num2;
break;
case'-':
cout<<num1 - num2;
break;
case'*':
cout<<num1 * num2;
break;
case'/':
cout<< num1 / num2;
break;
default:
cout<<"invalid";
}
}