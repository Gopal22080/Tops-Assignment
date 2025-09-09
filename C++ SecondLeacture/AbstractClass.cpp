#include<iostream>
using namespace std;
class Parent{
	public:
		virtual void display()=0;
};
class child: public Parent{
	public:
		void display(){
			cout<<"\n child class method called";
		}
};
main(){
	child c1;
	c1.display();
}
