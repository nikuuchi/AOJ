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
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
  int n[5] = {0};
  vector<int> v;
  vector<int>::iterator it;
  std::cin >> n[0] >> n[1] >> n[2] >> n[3] >> n[4];
  for(int i = 0;i<5;++i){
    v.push_back(n[i]);
  }

  sort(v.begin(), v.end(),greater<int>());
  for(it = v.begin();it != v.end();it++){
    std::cout << *it << " ";
  }
  std::cout << std::endl;

  return 0;
}


