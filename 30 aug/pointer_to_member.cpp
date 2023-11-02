#include<iostream>
using namespace std;
class Test{
	public:
		int x;
		void showdata();
};
void Test::showdata(){
		cout<<"\nEntered data is: "<<x<<endl;
}
int main(){
	Test t;			//Test *ptr;
	int Test::*ptr=&Test::x;
	//int Test::*ptr;
	//*ptr=&Test::x;
	t.*ptr=20; //* is member dereferencing operator
	t.showdata();
	/*Test *tp=new Test;//dynamically allcate memory for object
	tp->*ptr=80;
	tp->show_data();
	(*tp).*ptr=70;
	(*tp).show_data();
	*/
}
