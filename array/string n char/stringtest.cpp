#include <iostream>
#include <string>
using namespace std;
int main ()
{
  string base="this is a test string.";
  string str2="n example";
  string str=base;
  str.replace(9,5,str2);
  cout<<str<<endl;
}