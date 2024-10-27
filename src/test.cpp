#include <iostream>
#include "min.h"
#include "add.h"
#include "show.h"

using namespace std;

int main(){
  int a,b;
  cin>>a>>b;
  cout<<"the min is : "<<min(a,b)<<endl;
  cout<<"the sum is : "<<add(a,b)<<endl;
  showMes();showInf();
  return 0;  
}
