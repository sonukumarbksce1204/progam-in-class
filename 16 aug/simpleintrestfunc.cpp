#include<iostream>
using namespace std;

class calcSI
{
	public:
		void SI(int p,double r=2.5,int t=3);
};
//void SI(int p,double r=2.5,int t=3);
void calcSI::SI(int p,double r,int t)
{
	double si;
	si=(p*r*t)/100;
	cout<<"Simple intrest: "<<si;
}
int main(){
	calcSI c;
	int p,t;
	//float r;
	cin>>p;
	c.SI(p);
}
