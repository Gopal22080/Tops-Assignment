// operator
#include<iostream>
using namespace std;

main(){
	int x=10, y=3;
	float div;
	int add,sub,multi,modulo;
	div=(float)x/y;
	cout<<"==================== Arithemetic operator=========================";
	cout<<"\n divison is		="<<div;
	cout<<"\n Addition is		="<<x+y;
	cout<<"\n Substraction is	="<<x-y;
	cout<<"\n Multiplaction is	="<<x*y;
	cout<<"\n modulo is		="<<x%y;
	
	cout<<"\n===================Relational operator=============================";
	cout<<"\n Equal to is		="<< (x == y);
	cout<<"\n not equal to is	="<<(x !=y);
	cout<<"\n Gretar Than		="<<(x > y);
	cout<<"\n Less Than		="<<(x < y);
	cout<<"\n Gretar Than Equal to	="<<(x >= y);
	cout<<"\n Less Than Equal to	="<<(x <= y);
	
	cout<<"\n===================Logical Operator=================================";
	cout<<"\nAND (&&) is		="<<(x && y);
	cout<<"\nOR (||) is		="<<(x || y);
		
}
