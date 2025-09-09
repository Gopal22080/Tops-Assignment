#include<iostream>
using namespace std;

class student{
	public:
		//Data Member
	int enroll;
	char Name[20];
	string email;
	int std;
	
		// Members
	void getStudentData(){
		cout<<"\n Enter enroll std :";
		cin>>enroll>>std;
		cout<<"\n Enter Name Email :";
		cin>>Name>>email;
		}
		
	void showStudentData(){
		cout<<"\n Enroll ="<<enroll<<"Standard ="<<std;
		cout<<"\n Name ="<<Name<<"\n Email ="<<email;
	}
};

 main(){
	student s1, s2;
	s1.getStudentData();
	s1.showStudentData();
	
	cout<<"\n Second Object";
	s2.getStudentData();
	s2.showStudentData();
	return 0;
	}
