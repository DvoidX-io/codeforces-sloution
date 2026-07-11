#include <iostream>
#include <set>
using namespace std;

int main(){

  long long s1,s2,s3,s4;

  cin >> s1 >> s2 >> s3 >> s4;

  set<long long> colors;
  colors.insert(s1);
  colors.insert(s2);
  colors.insert(s3);
  colors.insert(s4);

  cout << 4 - colors.size();
  return 0;


}