#include<iostream>
using namespace std;

class Book{
	public:
		int bid;
		string BookName;
		string author;
		int price;
		
	void getBookDetail(){
		cout<<"\n Enter Book-ID and Book-Name : ";
		cin>>bid>>BookName;
		
		cout<<"\n Enter Author And Price :";
		cin>>author>>price;
	} 
	void ShowBookDetails(){
		cout<<"\n Book ID ="<<bid<<" \t Book Name ="<<BookName;
		cout<<"\n Author ="<<author<<"\t Price ="<<price;
	}
};
int main(){
	int i;
	Book book[3];
	for(i=0; i<3;i++){
		cout<<"\n\n Enter Book Detail \n \n"<<i+1;
		book[i].getBookDetail();
	}
	for(i=0;i<3;i++){
		cout<<"\n \n Show Book Detai of "<<i+1<<"\n \n";
		book[i].ShowBookDetails();
	}
}
