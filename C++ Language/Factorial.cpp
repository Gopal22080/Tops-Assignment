#include<iostream>
using namespace std;

class Fact{
	public:
		int num,f;
		void getNum(){
			cout<<"\n Enter the Num";
			cin>>num;
			
		}
		
		int factorial(int num){
			if (num == 1){
				return 1;
				
			}
			f= num*factorial(num-1);
			return f;
		}
			
		};
		main(){
			Fact f1;
			f1.getNum();
			cout <<f1.factorial(f1.num);
		}
		
