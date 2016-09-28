#include <iostream>
#include <cmath>
#include <algorithm>  
using namespace std;
int main()
{
int A,B,C,D;
cout<<"Enter 4 integer numbers\n";
cin>>A>>B>>C>>D;
if ((A>=B) && (B>=C) && (C>=D)) 
	{ cout<< max (A,(B,(C,D))); }
else { if ((A>B) && (B>C) && (C>D))
	{ cout<<A<<" "<<B<<" "<<C<<" "<<D<<endl; }
	else { cout<<A*A<<" "<<B*B<<" "<<C*C<<" "<<D*D<<endl; }}
return 0;
}