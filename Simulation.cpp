#include <iostream>
#include <random>
#include<stdlib.h>

using namespace std;



// I have used poisson distibution from c++ library

static std::random_device rd;
static std::mt19937 gen(rd());

int main()
{
  std::poisson_distribution<int> pd(5);

  int a=0, i, j=0, k,  l;


  cout<<"    Customer    interarriaval time    Arrival time on clock \n";

  for (i=1;i<=20;i++){
    cout<<"\t"<<i<<"\t\t"<<a<<"\t\t"<<j<<"\t\t\n";
    a=pd(gen);
    j=a+j;
  }

}
