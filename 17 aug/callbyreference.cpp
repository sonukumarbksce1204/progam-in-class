#include<iostream>
using namespace std;
void swap(int &p,int &q){    //call by address
	int z=q;
	q=p;
	p=z;
	cout<<"Value of a and b "<<p<<" "<<q<<endl;
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<"Value before swap a and b "<<a<<" "<<b<<endl;
	swap(a,b);
	cout<<"Value after swap an and b "<<a<<" "<<b<<endl;
}
