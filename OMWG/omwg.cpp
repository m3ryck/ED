#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int main()
{
    int x,y,z,sum;
   cin>>x;
    while(x--)
    {   cin>>y;
    	cin>>z;
         z--,y--;
    sum = 2*z*y+z+y;

    cout<<sum<<endl;
    }
return 0;
}
