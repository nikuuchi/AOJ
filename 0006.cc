#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
  string str = "";

  cin >> str;

  for(int i = str.length()-1; i >= 0;--i){
    cout << str.at(i);
  }
  cout << endl;
  return 0;
}


