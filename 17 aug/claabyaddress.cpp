#include<iostream>
using namespace std;
void swap(int *a,int *b){    //call by address
	int z=*b;
	*b=*a;
	*a=z;
	cout<<"Value of a and b "<<*a<<" "<<*b<<endl;
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<"Value before swap a and b "<<a<<" "<<b<<endl;
	swap(&a,&b);
	cout<<"Value after swap an and b "<<a<<" "<<b<<endl;
}
