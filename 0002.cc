#include <iostream>

using namespace std;

void digit(int a,int b){
  double ans = a+b;
  int i=1;
  while(ans >= 10){
    ans /= 10;
    ++i;
  }
  cout << i << endl;
}

int main(int argc, char *argv[])
{
  int a,b;
  while((cin >> a >> b) != NULL){
    digit(a,b);
  }
  
  return 0;
}


