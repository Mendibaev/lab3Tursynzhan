# include <iostream>
# include <cmath>
using namespace std;
int main ()
{

    int a, b, c; 
    cout << "enter 3 numbers\n";
    cin >>a>>b>>c;
    min(a,min(b,c));                                                                                         

    cout<<endl <<"min="<<max(a,max(b,c));
return  0;
}