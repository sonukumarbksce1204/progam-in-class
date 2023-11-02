#include<iostream>
using namespace std;
void fun(int);
void fun(float);
void fun(int i){
	cout<<"Value of i is: "<<i<<endl;
}
void fun(float j){
	cout<<"Value of j is: "<<j<<endl;
}
int main(){
	fun(12);
	fun(1.2);
	return 0;
}
