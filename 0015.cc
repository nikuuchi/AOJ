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
  const int max = 80;
  const int zero = 48;
  string c1 = "";
  string c2 = "";
  int p = 0;
  std::cin >> p;
  for(int k=0;k<p;++k){
    std::cin >> c1;
    std::cin >> c2;
    string ans = "";
    int cl = 0;
    for(int j= 1;(j<=c1.size())||(j<=c2.size());++j){
      if(j<=c1.size()&&j>c2.size()){
	if(c1.at(c1.size()-j)+cl>zero+9){
	  ans.insert(0,1,c1.at(c1.size()-j)+cl-10);
	  cl = 1;	      
	}else{
	  ans.insert(0,1,c1.at(c1.size()-j)+cl);
	  cl = 0;
	}
      }else if(j<=c2.size()&&j>c1.size()){
	if(c2.at(c2.size()-j)+cl>zero+9){
	  ans.insert(0,1,c2.at(c2.size()-j)+cl-10);
	  cl = 1;
	}else{
	  ans.insert(0,1,c2.at(c2.size()-j)+cl);
	  cl = 0;
	}
      }else{
	if(c2.at(c2.size()-j)+c1.at(c1.size()-j)-zero+cl > zero+9){
	  ans.insert(0,1,c2.at(c2.size()-j)+c1.at(c1.size()-j)-zero+cl - 10);
	  cl = 1;
	}else{
	  ans.insert(0,1,c2.at(c2.size()-j)+c1.at(c1.size()-j)-zero+cl);
	  cl = 0;
	}
      }
    }
    if(cl ==1){
      ans.insert(0,1,'1');
    }

    if(ans.size()>max){
      std::cout << "overflow" << std::endl;
    }else{
      std::cout << ans << std::endl;
    }
  }    

  return 0;
}


