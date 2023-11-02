#include<iostream>
using namespace std;
void area(int);
void area(int, int);
void area(double);
void area(int s){
	cout<<"Area of square: "<<s*s<<endl;
}
void area(int l,int b){
	cout<<"Area of rectangel: "<<l*b<<endl;
}
void area(double r){
	cout<<"Area of circle: "<<3.14*r*r<<endl;
}
int main(){
	area(5);
	area(2,3);
	area(5.4);
	return 0;
}
