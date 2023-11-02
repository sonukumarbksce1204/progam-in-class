#include<iostream>
using namespace std;
class rectangle{
	private:
		int l,w;
		void getl(){
			cin>>l;
		}
		void getb(){
			cin>>w;
		}
		public:
			void area(){
				getl();
				getb();
				cout<<"Area of recatngle :"<<l*w;
			}
};
int main(){
	rectangle r;
	r.area();
}
