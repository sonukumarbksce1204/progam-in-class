#include<iostream>
using namespace std;
class Square{
	int number;
	public:
		void get(){
			cin>>number;
		}
		friend int square(Square s);
};
int square(Square s){
	return s.number*s.number;
}
int main(){
	Square s;
	s.get();
	cout<<"Square is: "<<square(s);
}
