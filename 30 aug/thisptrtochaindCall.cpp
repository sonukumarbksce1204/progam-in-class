#include<iostream>
using namespace std;
class Test{
	int x;
	int y;
	public:
			void assign(int x,int y){
				this->x;
				this->y;
			}
			Test &setX(int a){
				x=a;
				return *this;
			}
			Test &setY(int b){
				y=b;
				return *this;
			}
			void print(){
				cout<<"x: "<<x<<"y= "<<y<<endl;
			}
};
int main(){
	Test obj1;
	obj1.assign(5,5);
	obj1.setX(10).setY(20);
	obj1.print();
}
