#include<iostream>
using namespace std;
int main()
{
	int a,b;
	char i;
	while(true)
	{	
	cout<<"FIRST NUMBER : ";
	cin>>a;
	cout<<"SECOND NUMBER : ";
	cin>>b;
	cout<<"+ FOR ADDITION "<<endl;
	cout<<"- FOR SUBSTRACTION"<<endl;
	cout<<"* FOR MULTIPLICATION"<<endl;
	cout<<"/ FOR QUOTIENT"<<endl;
	cout<<"% FOR REMAINDER"<<endl;
	cout<<"YOUR SIGN : ";
	cin>>i;
	if(i=='+')
	cout<<"ADDITION : "<<a+b<<endl<<endl;
	else
	if(i=='-')
	cout<<"SUBSTRACTION : "<<a-b<<endl<<endl;
	else 
	if(i=='*')
	cout<<"MULTIPLICATION : "<<a*b<<endl<<endl;
	else
	if(i=='/')
	cout<<"QOUTIENT : "<<a/b<<endl<<endl;
	else
	if(i=='%')
	cout<<"REMINDER : "<<a%b<<endl;
	else
	cout<<"NOT MATCH"<<endl<<endl;
	break;		
 }
 return 0;
}
