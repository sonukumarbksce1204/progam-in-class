#include<iostream>
using namespace std;
void swap(int,int);//deleration 
void swap(int a,int b)//defination
{
	cout<<"Number A: "<<a<<" Number B: "<<b<<endl;
	int temp=b;
	b=a;
	a=temp;	
	cout<<"Number A: "<<a<<" Number B: "<<b<<endl;
}
int main(){
	int a,b;
	cin>>a>>b;
	swap(a,b);
}
