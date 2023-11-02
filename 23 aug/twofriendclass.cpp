#include<iostream>
using namespace std;
class xyz;
class abc;
class xyz{
	int x,y;
	public:
		void get(){
			cin>>x>>y;
		}
		friend class abc;
};
class abc{
	public:
		void sqr(xyz o1){
			cout<<"Square of x: "<<o1.x*o1.x<<endl;
		}
		void cube(xyz o1){
			cout<<"Cube of y: "<<o1.y*o1.y*o1.y<<endl;
		}
};

int main(){
	xyz o1;abc o2;
	o1.get();
	o2.sqr(o1);
	o2.cube(o1);
}
