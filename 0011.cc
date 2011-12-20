#include <iostream>
#include <string>
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

//You need include string,vector
void split(string str,string delim,vector<string> *v){
  int i=0;
  while((i = str.find_first_of(delim)) != string::npos){
    v->push_back(str.substr(0,i));
    str = str.substr(i+1);
  }
  v->push_back(str);


int main(int argc, char *argv[])
{
  int w,n;
  cin >> w;
  cin >> n;
  int  m[30][2] = {0};
  for (int i = 0; i < n; ++i)
    {
      string str,delim = ",";
      vector<string> v;
      stringstream ss1;
      stringstream ss2;
      cin >> str;
      split(str,delim,&v);
      ss1 << v.at(0);
      ss1 >> m[i][0];
      ss2 << v.at(1);
      ss2 >> m[i][1];

    }

  int ans[30] = {0};
  for (int i = 1; i <= w; ++i)
    {
      int way = i;
      for(int j = 0;j<n;++j){
	if(way == m[j][0])
	  way = m[j][1];
	else if(way == m[j][1])
	  way = m[j][0];
      }
      ans[way-1] = i; 
    }
  for(int i=0;i<w;++i){
    std::cout << ans[i] << std::endl;
  }
  return 0;
}


