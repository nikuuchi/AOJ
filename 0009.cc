#include <iostream>
#include <set>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <sstream>
#include <numeric>
#include <utility>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <cstring>
#include <cassert>
#include <utility>

using namespace std;

int main(int argc, char *argv[])
{
  int n=0;
  int count=0;
  const int max = 1000000;
  const int m0  = sqrt(max);
  vector<int> v(max,0);
  v[0] = 1;
  v[1] = 1;
  for(int m=2;m<m0;m++){
    if(v[m]== 0){
      for(int i = 2;i*m<=max;i++){
	v[i*m]=1;
      }
    }
  }
  while((std::cin >> n) != NULL ){
    for(int i=0;i<=n;++i)
      if(v[i]!=1)
	++count;

    std::cout << count << std::endl;
    count = 0;
  }

  return 0;
}


