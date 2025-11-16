#include<iostream>
using namespace std;


void countVowelsAndConsonants(const char *str, int &vowels, int &consonants) {
  vowels = consonants = 0;

  while (*str) {
      char ch = tolower(*str);
      if (isalpha(ch)) {
          if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
              vowels++;
          } else {
            consonants++;
          }
      }
      str++;
  }
}

int main() {
  const char *text = "Hello, World!";
  int numVowels, numConsonants;
  countVowelsAndConsonants(text, numVowels, numConsonants);
  cout << "Vowels: " << numVowels << ", Consonants: " << numConsonants;
  return 0;
}



