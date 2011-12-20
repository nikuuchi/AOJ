#include <iostream>
#include <vector>
#include <string>

using namespace std;

//split()
void split(string str,string delim,vector<string> *v){
  int i=0;
  while((i = str.find_first_of(delim)) != string::npos){
    v->push_back(str.substr(0,i));
    str = str.substr(i+1);
  }
  v->push_back(str);
}


//test fot split
int main(int argc, char *argv[])
{
  string str = "aaa,bbb,ccc";
  string delim = ",";
  vector<string> *v = new vector<string>();
  
  split(str,delim,v);
  std::cout << v->at(0) << " " << v->at(1) << " "<< v->at(2) << std::endl;

  delete v;

  return 0;
}


