#include <iostream>
#include <cstdio>
#include <cmath>

double round(double d,double n){
  return floor((d) * pow(10, n) + 0.5) / pow(10, n);
} 

using namespace std;

int main(int argc, char *argv[])
{
  double a=0,b=0,c=0,d=0,e=0,f=0;
  while((cin >> a >> b >> c >> d >> e >> f) != NULL){
    double x = round((c*e - b*f) / (e*a - b*d),3); 
    double y = round((d*c - a*f) / (d*b - a*e),3);

    printf("%.3f %.3f\n",x,y);
  }
  return 0;
}



