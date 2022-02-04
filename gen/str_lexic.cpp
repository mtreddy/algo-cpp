/*
 *  Lexicographical order is often known as alphabetical order when dealing with strings. A string is greater than another string if it comes later in a lexicographically sorted list.
 *
 *  Given a word, create a new word by swapping some or all of its characters. This new word must meet two criteria:
 *
 *  It must be greater than the original word
 *  It must be the smallest word that meets the first condition
 *  Example
 *
 *  The next largest word is .
 *
 *  Complete the function biggerIsGreater below to create and return the new string meeting the criteria. If it is not possible, return no answer.
 *
 *  Function Description
 *
 *  Complete the biggerIsGreater function in the editor below.
 *
 *  biggerIsGreater has the following parameter(s):
 *
 *  string w: a word
 *  Returns
 *  - string: the smallest lexicographically higher string possible or no answer
 *
 *  Input Format
 *
 *  The first line of input contains , the number of test cases.
 *  Each of the next  lines contains .
 *
 *  Constraints
 *
 *   will contain only letters in the range ascii[a..z].
 *   Sample Input 0
 *
 *   5
 *   ab
 *   bb
 *   hefg
 *   dhck
 *   dkhc
 *   Sample Output 0
 *
 *   ba
 *   no answer
 *   hegf
 *   dhkc
 *   hcdk
 *   Explanation 0
 *
 *   Test case 1:
 *   ba is the only string which can be made by rearranging ab. It is greater.
 *   Test case 2:
 *   It is not possible to rearrange bb and get a greater string.
 *   Test case 3:
 *   hegf is the next string greater than hefg.
 *   Test case 4:
 *   dhkc is the next string greater than dhck.
 *   Test case 5:
 *   hcdk is the next string greater than dkhc.
 *   Sample Input 1
 *
 *   6
 *   lmno
 *   dcba
 *   dcbb
 *   abdc
 *   abcd
 *   fedcbabcd
 *   Sample Output 1
 *
 *   lmon
 *   no answer
*   no answer
*   acbd
   *   abdc
   *   fedcbabdc
 */
#include <iostream>
#include <string>
using namespace std;
int main (int argc, char **argv)
{
	if(argc <= 1) {
		cout << "useage: string <string input>";
			return 0;
	}
	  //std::string str ("Test string");
	string str = argv[1];
	  if(str.length() <= 1) {
		  cout << "No answer";
	  }
	cout << "\n Input string: "  << str << "\n";
	int flag = 1;
	int swap = 0;
	int diff = 0xf;
	int ind = 0;
	/*
	 * Algorthim is first check difit which hisghes from the right side and swap.
	 *  Then all digitis below sort them in ascending order
	 *
	 */
	for(int i = str.length() - 1; i > 0 ; i--) {
		for(int j = i; j < str.length(); j++) {
			if (int(str[i - 1])  < int(str[j])) {
				cout << "\n i-1 " << (i-1) << str[i-1] << " j " << j << str[j] <<  "\n";
				if(diff > (int(str[j]) - int(str[i-1]))) {
					ind = j;
					diff = (int(str[j]) - int(str[i-1]));
					swap = 1;
					cout << "\n diff:" <<  diff << " \n";

				}
			}
				
		}
		if (swap){
			char tmp;
			tmp = str[ind];
			str[ind] = str[i-1];
			str[i-1] = tmp;
			flag = 0;
			for(int k=i; k < str.length(); k++) {
				for(int l = k+1; l < str.length(); l++) {
					if(str[k] > str[l]) {
						char tmp1 = str[k];
						str[k] = str[l];
						str[l] = tmp1;
					}
				}
			}
			break;
		} 
	}

	if(flag == 1) {
		cout << "\n Unknwon\n";
	} else {
		cout << "\nNew string:"  << str << "\n";
	}
	        
	return 0;
}


