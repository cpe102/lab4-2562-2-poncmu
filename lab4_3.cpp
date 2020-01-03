#include <iostream>
#include <math.h>

using namespace std;

int findDivisor(int x)
{
    for(int i=1;i<=x;i++)
    {
        if(i!=1 && x%i==0)
        return i;
    }
}

int main()
{
    cout<<findDivisor(10)<<endl;
    cout<<findDivisor(97)<<endl;
    cout<<findDivisor(221)<<endl;
    return 0;
}
