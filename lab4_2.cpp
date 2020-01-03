#include<iostream>

using namespace std;

//Write function findDistance() here

float findDistance(float u,float a,float t)
{
  float s;
  s=u*t+0.5*a*t*t;
  return s;
}

int main(){

  //Calling findDistance() using test cases
  cout<<"S(0,0.5,1) = "<<findDistance(0,0.5,1)<<endl;
  cout<<"S(1.5,-1,2) = "<<findDistance(1.5,-1,2)<<endl;
  cout<<"S(5,4,3) = "<<findDistance(5,4,3)<<endl;
  return 0;
}
