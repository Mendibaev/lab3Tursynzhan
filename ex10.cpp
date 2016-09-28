#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int x,y,r,d;
cout<<"Enter point coordinates X,Y and radius of the cirle\n";
cin>>x>>y>>r;
d=sqrt(x*x+y*y);
if (d<=r) 
	{ cout<<"The point is inside of the circle\n"; }
else 
	{ cout<<"The point is outside of the circle\n"; }
return 0;
}
