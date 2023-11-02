#include<iostream>
using namespace std;
class A;
class B;
class C;
class A{
	int a;
	public:
		void get(){
			cin>>a;
		}
		friend int multi(A,B,C);
};
class B{
	int b;
	public:
		void get(){
			cin>>b;
		}
		friend int multi(A,B,C);
};
class C{
	int c;
	public:
		void get(){
			cin>>c;
		}
		friend int multi(A,B,C);
};
int multi(A a1,B b1,C c1){
	return a1.a*b1.b*c1.c;
}
int main(){
	A a1;B b1;C c1;
	a1.get();
	b1.get();
	c1.get();
	cout<<"Multiply : "<<multi(a1,b1,c1);
}
