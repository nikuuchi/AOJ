#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  int ans = 100000;
  int weeks = 0;
  cin >> weeks;
  for(int i=0;i<weeks;++i)ans = ans * 1.05;
  int b = ans % 10000;
  if(b != 0)ans = ans - b + 10000;
  cout << ans << endl;
  return 0;
}

