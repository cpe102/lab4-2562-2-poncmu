#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

int main()
{
    float e=2.71828;
    float x;
    cout<<"Enter x : \n";
    cin>>x;
    float y=3*pow(x,3)+2*e+pow(2,2*x+1)+pow(pow(x,2)+1,0.5);
    cout<<"Result y = "<<y;


    return 0;
}