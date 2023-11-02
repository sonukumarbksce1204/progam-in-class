#include<iostream>
using namespace std;
class car{
	private:
		char manuf[20],modname[10],color[5];
		int engno,yofm;
		public:
			void get();
			void put();
			
};
void car::get(){
	cin>>manuf>>modname>>color>>engno>>yofm;
}
void car::put(){
	cout<<manuf<<" "<<modname<<" "<<color<<" "<<engno<<" "<<yofm;
}
int main(){
	car c;
	c.get();
	c.put();
}
