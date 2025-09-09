//Single Inheritance

//Class Child : Public Parent
#include<iostream>
using namespace std;

class Category{
	public :
		int cid;
		char cname[20];
		void getCategory(){
			cout<<"\n Enter C-ID and Name= ";
			cin>>cid>>cname;
			
		}
		
};

	class Product : public Category{
		public:
			int pid;
			char pname;
			float price;
			void getProduct(){
				
				cout<<"\n Enter Prodect-id Product-name and Price";
				cin>>pid>>pname>>price;
				
			}
			
	void showProduct(){
		cout<<"\n cid= "<<cid<<"\n cname= "<<cname;
		cout<<"\n pid= "<<pid<<"\n Pname= "<<pname<<"\n Price= " <<price;
		}
	}; 
	int main(){
		Product p1;
		p1.getCategory();
		p1.getProduct();
		p1.showProduct();
	}
