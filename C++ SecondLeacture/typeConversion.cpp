//Type Conversion
//#include<iostream>
//using namespace std;
//
//main(){
//	int x=10, y=3;
//	float ans;
//	int ans2;
//	ans=(float)x/y;
//	cout<<"\n div="<<ans;
//}


/// Arithemetic operator
#include<iostream>
using namespace std;

main(){
	int x=10, y=3;
	float div;
	int add,sub,multi,modulo;
	div=(float)x/y;
	add=x+y;
	sub=x-y;
	multi=x*y;
	modulo=x%y;
	cout<<"\n divison is		="<<div;
	cout<<"\n Addition is		="<<add;
	cout<<"\n Substraction is	="<<sub;
	cout<<"\n Multiplaction is	="<<multi;
	cout<<"\n modulo is			="<<modulo;
}
