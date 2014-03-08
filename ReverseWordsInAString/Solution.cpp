#include <string>
#include <iostream>
#include <sstream>
#include <list>

using namespace std;

class Solution {
public:
    void reverseWords(string &s) {
      stringstream stringAsStream(s);
      list<string> listOfStrings;
      string oneString;
      while (stringAsStream >> oneString) {
	listOfStrings.push_back(oneString);
      }
      stringstream outputString;
      for (list<string>::reverse_iterator it = listOfStrings.rbegin();
	   it != listOfStrings.rend(); ++it) {
	if (it != listOfStrings.rbegin()) {
	  outputString << " ";
	}
	outputString << *it;
      }
      s = outputString.str();
      // Look, Ma! No explicit loops! But the OJ doesn't know what an
      // istream_iterator is :(
      // stringstream stringAsStream(s);
      // list<string> listOfStrings;
      // copy(istream_iterator<string>(stringAsStream),
      //      istream_iterator<string>(),
      //      back_inserter(listOfStrings));
      // stringstream outputString;
      // copy(listOfStrings.rbegin(),
      //      listOfStrings.rend(),
      //      ostream_iterator<string>(outputString, " "));
      // s = outputString.str();
    }
};
