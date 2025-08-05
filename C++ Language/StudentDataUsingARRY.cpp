#include<iostream>
using namespace std;

class student{
	public:
	int enroll;
	char name[20];
	char email[30];
	
		
		void getStudentData(){
		cout<<"\n Enter Enroll Name Email";
		cin>>enroll>>name>>email;
		
	}	
		void showStudentData(){
			cout<<"\n Enroll	="<<enroll;
			cout<<"\n Name		="<<name;
			cout<<"\n Email		="<<email;
		}
};
	main(){
		student s[2];
		for(int i=0;i<2;i++){
			cout<<"Enter Student Data of"<<i+1;
			s[i].getStudentData();
		}
		
				for(int i=0;i<2;i++){
			cout<<"Enter Student Data of"<<i+1;
			s[i].showStudentData();
		}

	}
