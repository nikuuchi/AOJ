#include <iostream>

int pow(int x){
  return x*x*x;
}

int main(int argc, char *argv[])
{
  int raw = 0;
  std::cin >> raw;
  std::cout << pow(raw) << std::endl;
  return 0;
}


