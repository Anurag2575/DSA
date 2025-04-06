#include<string>
using namespace std;

string defangIPAddress(string address){
  string result;
  for(auto& ch : address)
    result += (ch == '.' ? "[.]" : string(1, ch));

  return result;
}
