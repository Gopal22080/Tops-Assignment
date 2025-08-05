//Single Student Data Using Array
#include<iostream>
using namespace std;
class student{
	int enroll;
	char name[20];
	char email[30];
	public:
		
	void getStudentData(){
		cout<<"\n Enter Enroll Name Email";
		cin>>enroll>>name>>email;
		
	}
	
	void showStudentData(){
		cout<<"\n Enroll="<<enroll;
		cout<<"\n Name="<<name;
		cout<<"\n Email="<<email;
	}
};

main(){
	student s1;
	s1.getStudentData();
	s1.showStudentData();
	
}
