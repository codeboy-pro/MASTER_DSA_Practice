#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(const char *str) {
  // Check for palindrome   
int i=0,j=5-1;
int count=0;
while(i<5 && j>=0){
  if(str[i]==str[j]){
count++;
    i++,j--;

  }
  else{
count=0;
    break;
  }
}
if(count>0){
return 1;
}
return 0;


}

int main() {
  const char *palindrome1 = "level";
  const char *palindrome2 = "hello";
 cout << "Is '" << palindrome1 << "' a palindrome? " << (isPalindrome(palindrome1) ? "Yes" : "No") <<endl;
  cout << "Is '" << palindrome2 << "' a palindrome? " << (isPalindrome(palindrome2) ? "Yes" : "No") <<endl;
  return 0;
}
