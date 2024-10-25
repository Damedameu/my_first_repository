#include <iostream>
#include "min.h"
#include "add.h"

using namespace std;

int main(){
  int a,b;
  cin>>a>>b;
  cout<<"the min is : "<<min(a,b)<<endl;
  cout<<"the sum is : "<<add(a,b)<<endl;
  return 0;  
}
