#include <iostream>

using namespace std;

unsigned long gcd(unsigned long a,unsigned long b){
  unsigned long tmp = b;
  while(a%b!=0){
    tmp = b;
    b = a % b;
    a = tmp;
  }
  return b;
}

unsigned long lcm(unsigned long a,unsigned long b){
  return a * b / gcd(a, b);
}


int main(int argc, char *argv[])
{
  unsigned long a=0,b=0;
  while((cin >> a >> b) != NULL){
    unsigned long gc = gcd(a,b);
    unsigned long lc = lcm(a,b);
    cout << gc << " " << lc << endl;
  }
  return 0;
}



