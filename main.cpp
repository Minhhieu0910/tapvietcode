#include <iostream>
//T�NH S(n)= 1+2+3+...+n
using namespace std;

int main()
{
  //c�ch 1
  /* int n,s;
    cout<<"nhap so cuoi n ="<<endl;
    cin>>n;
    s=(n*(n+1))/2;
    cout<<"S(n) = "<<s;  */

    // c�ch 2
    int n;
    int s=0;
    cout<<"nhap so cuoi n ="<<endl;
    cin>>n;
    for(int i=0;i<=n; i++)
    {
        s=s+i;
    }
    cout<<"S(n) = "<<s;


    return 0;
}
