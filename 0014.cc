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
#include <utility>

using namespace std;


int f(int x){
  return x*x;
}

int main(int argc, char *argv[])
{
  const int MAX = 600;
  const int MIN = 0;

  int d;
  while((std::cin >> d) != NULL ){
    int answer=0;
    for (int i = 0; i*d < MAX; ++i)
      {
	answer += f(i*d) * d; 
      }
    std::cout << answer << std::endl;

  }

  
  return 0;
}


