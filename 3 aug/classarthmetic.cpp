#include<iostream>
using namespace std;
class Arthmetic{
	private:
		int x,y;
		int sum();
		int diff();
		//void prodt();
		//void div();
		public:
			void getdata();
			void print(){
				cout<<sum()<<endl;
				cout<<diff()<<endl;
			}
			
};
void Arthmetic::getdata(){
	cout <<"Enter the value of a and b";
	cin>>x>>y;
}
int Arthmetic::sum(){
	return x+y;
}
int Arthmetic::diff(){
	return x-y;
}
/*
void Arthmetic::prodt(){
	cout<<"Multipication of a and b is"<<x*y<<endl;
}
void Arthmetic::div(){
	cout<<"Division  of a and b is"<<x/y<<endl;
}
*/
int main(){
	Arthmetic a;
	a.getdata();
	a.print();
//	a.sum();
//	a.diff();
//	a.prodt();
//	a.div();
}
