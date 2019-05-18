#include<iostream>
#include<istream>
#include<ostream>
using namespace std;
class complex
{
	int a,b;
	public:
	friend ostream& operator<<(ostream&,complex );
	friend istream& operator>>(istream&,complex &);
};
ostream& operator<<(ostream &dout,complex c)
{
	cout<<c.a<<" "<<c.b;
	return(dout);	
}
istream& operator>>(istream &din,complex &c)
{
	cin>>c.a>>c.b;
	return(din);
}
main()
{
	complex c;
	cin>>c;
	cout<<c;
	
	
	
}
