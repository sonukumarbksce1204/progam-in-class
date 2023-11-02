#include<iostream>
using namespace std;
class A{
	int x;
	public:
		void getdata(){
			cout<<"\nEnter the value of x: "<<endl;
			cin>>x;
		
		}
		void showdata(){
			cout<<"\nEntered data is: "<<x<<endl;
		}
};
int main(){
	A obj1;
	A *ptr; 	//S *ptr=&obj1;
	ptr=&obj1;	//pointer to object
	ptr->getdata(); //(*ptr).getdata(); or obj1.getdata();
	ptr->showdata();
	(*ptr).getdata();
	(*ptr).showdata();
}
