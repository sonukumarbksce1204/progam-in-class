#include<iostream>
using namespace std;
class shape{
	public:
		void area(int);
		void area(int, int);
		void area(double);
};
void shape::area(int s){
	cout<<"Area of square: "<<s*s<<endl;
}
void shape::area(int l,int b){
	cout<<"Area of rectangel: "<<l*b<<endl;
}
void shape::area(double r){
	cout<<"Area of circle: "<<3.14*r*r<<endl;
}
int main(){
	shape s;
	s.area(5);
	s.area(2,3);
	s.area(5.4);
	return 0;
}
