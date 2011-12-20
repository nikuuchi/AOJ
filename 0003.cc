#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
  int max = 0;
  cin >> max;
  for(int i=0;i < max;++i){
    int arr[] = {0,0,0};
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(&arr[0],&arr[3]);
    
    if(arr[0] * arr[0] + arr[1] * arr[1] == arr[2] * arr[2]){
      cout << "YES" << endl;
    }else{
      cout << "NO" << endl;
     }
  }
  return 0;
}


