#include <iostream>
using namespace std;
void funcl(int i=10,float f=5.5);

int main()
{
	cout<<"when no argument is passed:    ";
	funcl();
	 
	 
	cout<<"when first argument is passed:    ";
	funcl(5);
	
	
	cout<<"when all the argument is passed:    ";
	funcl(5,4.5);
	
	
	cout<<"when second argument is passed:    ";
	funcl(3.5);
	
	return 0;
	
	
}
void funcl(int a, float b)
{
	cout<<a+b<<endl;
	
}
