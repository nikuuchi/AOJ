#include <iostream>
using namespace std;

int rect(int x,int y){
  return x * y;
}

int length(int x,int y){
  return 2 * (x + y);
}

int main(int argc, char *argv[])
{
  int x,y;
  cin >> x >> y;
  cout << rect(x,y) << " " << length(x,y) << endl;
  return 0;
}


