#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>


using namespace std;


int main(int argc, char *argv[])
{
  vector<int> v(10,0);
  for(int i=0;i<10;++i){
    cin >> v[i];
  }
  sort(v.begin(),v.end(),greater<int>());
  for(int i=0;i<3;++i){
    cout << v[i] << endl;
  }
  return 0;
}


