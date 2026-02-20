#include <iostream>
using namespace std;
float f(float x)
{
	return x*x*x - 2*x-5;
}

float df(float x)
{
	return  3*x*x - 2;
}

int main (void)
{ 

	float x = 2;

	cout << "initial guess: ";
	cin >> x;	
	
	float toler = 100000;
	int i=0 ; 
	float x1;
	while((int)(f(x) * toler ) != 0)
	{	
		x1 = x - f(x)/df(x) ;
		x = x1;
		i++;
		cout<< "iteration "<<i <<"  value of x:"<<x<<"  &"<<" f(x): "<<f(x)<<endl;
	} 
	
	cout <<"apporximate root is: "<<x ;
}
