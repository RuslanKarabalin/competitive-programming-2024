#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(nullptr);

  string original;
  string input;
  getline(cin, original);
  getline(cin, input);

  string formattedInput;
  bool isOperator = false;
  int cursorPosition = 0;

  for (int i = 0; i < (int)input.length(); ++i) {
    char c = input[i];
    cout << c << ":" << cursorPosition << ":" << isOperator << "\n";
    if (!isOperator) {
      if (c == '<') {
        isOperator = true;
      } else {
        formattedInput += c;
        ++cursorPosition;
      }
    } else {
      if (c == '>') {
        isOperator = false;
      }
      if (c == 'd') {
        i += 5;
        if (cursorPosition + 1 < (int)formattedInput.length()) {
          formattedInput.erase(cursorPosition, 1);
        }
      }
      if (c == 'b') {
        i += 5;
        if (cursorPosition - 1 >= 0) {
          formattedInput.erase(cursorPosition - 1, 1);
        }
      }
      if (c == 'l') {
        i += 3;
        cursorPosition = max(0, (int)formattedInput.length() - 1);
      }
      if (c == 'r') {
        i += 3;
        cursorPosition = min((int)formattedInput.length(), (int)formattedInput.length() + 1);
      }
    }
  }
  cout << formattedInput << "\n";

  return 0;
}
