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

class Point
{
private:
  double x;
  double y;
public:
  Point(double x,double y){this->x = x; this->y = y;};
  Point(Point p,Point a){this->x = p.x - a.x; this->y = p.y - a.y;};
  ~Point(){};
  double getX(){return x;};
  double getY(){return y;};
};

// 外積を求める
double cross(Point a,Point b)
{
  return a.getX() * b.getY() - a.getY() * b.getX();
}

// 点 p が反時計回りの三角形 abc の内側にあるかどうか判定
bool point_in_triangle(Point p,Point a,Point b,Point c)
{
  // p が ab の右側にあれば三角形の外側にある
  if (cross(Point(p,a), Point(b,a)) < 0.0) return false;
  // p が bc の右側にあれば三角形の外側にある
  if (cross(Point(p, b),Point(c,b)) < 0.0) return false;
  // p が ca の右側にあれば三角形の外側にある    
  if (cross(Point(p,c), Point(a,c)) < 0.0) return false;
  return true;
}


int main(int argc, char *argv[])
{
  double x1,y1,x2,y2,x3,y3,xp,yp;
  while((std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp) != NULL ){
    if(point_in_triangle(Point(xp,yp),Point(x1,y1),Point(x2,y2),Point(x3,y3))){
      std::cout << "YES" << std::endl;
    }else{
      std::cout << "NO" << std::endl;

    }
  }

  return 0;
}


