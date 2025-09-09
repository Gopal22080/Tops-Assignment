#include<iostream>
#include<string.h>

using namespace std;
class Maths{
	public:
		static int s;
		static char CompanyName[20];
		Maths(){
			s++;
			
		}
		static void staticFunction(){
			cout<<"\n Total Object Cou= "<<s;
			cout<<"\n Company Name="<<CompanyName;
		}
};

int Maths :: s=0;
char Maths :: CompanyName[20]="Tops tech";
main(){
	Maths m1,m2,m3;
	Maths :: StaticFunction();
}
