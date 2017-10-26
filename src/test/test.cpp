#include <iostream>

using namespace std;

string alpha(string s) {
  for (size_t i = 0; i < s.size(); ++i) {
    if (isalpha(s[i])) {
      continue;
    } else if (!isalpha(s[i])) {
      s = s.substr(0, i) + s.substr(i + 1, s.size() - 1);
    }
  }
  return s;
}

bool isPalindrome(string s) {
  
  char left = tolower(s[0]);
  char right = tolower(s[s.size() - 1]);
  if (isalpha(left) && isalpha(right)) {
    if (left == right && !s.empty()) {
      s = s.substr(1, s.size() - 2);
      return isPalindrome(s);
    } else if (left != right) {
      return false;
    }
  }
  return true;
}

int main(int argc, char *argv[]) {
  
  string s = argv[1];
  if (isPalindrome(alpha(s))) {
    cout << s << " is a palindrome" << endl;
  } else {
    cout << s << " is not a palindrome" << endl;
  }
  return 0;
}
