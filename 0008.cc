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

//n = a + b + c + dの組み合わせを答える
//見提出

using namespace std;

int main(int argc, char *argv[])
{
  int n=0;
  while((std::cin >> n) != NULL ){
    if(n>36){
      std::cout << 0 << std::endl;
    }else{
      int count = 0;
      for(int a = 9;a>=0;--a){
	for(int b = 9;b>=0;--b){
	  for(int c = 9;c>=0;--c){
	    for(int d = 9;d>=0;--d){
	      if(n == a + b + c + d){
		++count;
	      }
	    }
	  }
	} 
      }
      std::cout << count << std::endl;
    }

  }

  return 0;
}



