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

int month2day(int month){
  int ans = 0;
  switch(month){
  case 11:
    ans += 30;
  case 10:
    ans += 31;
  case 9:
    ans += 30;
  case 8:
    ans += 31;
  case 7:
    ans += 31;
  case 6:
    ans += 30;
  case 5:
    ans += 31;
  case 4:
    ans += 30;
  case 3:
    ans += 31;
  case 2:
    ans += 29;
  case 1:
    ans += 31;
    break;
  default:
    ans += 0;
  }
  return ans;
}

int main(int argc, char *argv[])
{
  int month,day;
  string date[7] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
  while((std::cin >> month >> day) != NULL ){
    if(month == 0)break;
    --month;--day;
    int answer = month2day(month);
    answer += day + 3;
    answer = answer % 7;
    std::cout << date[answer] << std::endl;
  }

  return 0;
}


