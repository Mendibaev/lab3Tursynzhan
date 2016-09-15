# include <iostream>
# include <cmath>
using namespace std;
int main ()
{

    int a, b, c; 
    cout << "enter 3 numbers\n";
    cin >>a>>b>>c;
    max(a,max(b,c));                                                                                         

    cout<<endl <<"max="<<max(a,max(b,c));
return  0;
}