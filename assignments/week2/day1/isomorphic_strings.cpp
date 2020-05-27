#include <iostream>
#include <string>
#include <unordered_map>
//INCOMPLETE
bool isIsomorphic(std::string s, std::string t) {
  std::unordered_map<char,int> isomorphic;
  for(int i = 0; i < s.length(); i++) {
    int x = abs(s[i] - t[i]);
    auto st = isomorphic.find(s[i]);
    auto tt = isomorphic.find(t[i]);
    std::cout << s[i] << " " << t[i] << " " << x << std::endl;
    if(st != isomorphic.end()) {
      if(st->second != x) {
	return false;
      } 
    } else if(tt != isomorphic.end()) {
      if(tt->second != x) {
	return false;
      }
    } else if(st == isomorphic.end()) {
      isomorphic.insert(std::make_pair(s[i], x));
    } else {
      isomorphic.insert(std::make_pair(t[i], x));
    }
  }
  return true;
}

int main() {
  std::cout << isIsomorphic("ab", "ca");
  return 0;
}
