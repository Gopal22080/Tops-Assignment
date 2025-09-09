 #include<iostream>
using namespace std;

int main(){

	const string Name = "Hellow World !";
	const double PI = 3.14;
	
	int age = 20;
	double height = 5.4;
	char grade = 'A';
	bool isStudent = true;
	
	cout << "Name : " << Name <<endl;
	cout << "Value of  PI : " << PI <<endl;
	cout << "Age: " << age <<endl;
	cout << "height: " << height <<endl;
	cout << "grade: " << grade << endl;
	cout << "Is student? " << isStudent << endl;
	
	age = age + 5;
	height = height + 0.1;
	
	cout << "\n After Updating variable: " << endl;
	cout << "Updated Age: " <<age<<endl;
	cout << "Updated Height: " << height << "feet" <<endl;
	
	double radius = 2.0;
	double area = PI * radius * radius;
	cout << "\n Area of cricel with radius " << radius << " is: " <<area << endl;	
}

