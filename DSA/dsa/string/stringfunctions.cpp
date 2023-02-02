#include <bits/stdc++.h>      
#include <cstddef>    
#include<string>
using namespace std;    

int main()
{
  // string str ("look for non-alphabetic charactesrl"); //s1

  // int found = str.find_first_not_of("ol"); //s2
  // //find_first_not_of : first occurence of a char in s1 that is not in s2

  // if (found!=string::npos) //npos means until the end of string : defined with -1

  // {
  //   cout << "The first non-alphabetic character is " << str[found];
  //   cout << " at position " << found << '\n';
  // }
  // else{cout<<"no other char is present in s1.";}

  // max_size() represents the theoretical maximum size of a string, 
  // while capacity() represents the current size of the memory buffer used by the string.

  // .append() - for append to a string, can append any length
  // .push_back() - can only append a char
  
  // .substr(x,y) - for taking a part of the string starting from x index and number of characters = y

  // .assign() is a member function of the std::string class that assigns a new value to the string. It can be used to initialize a string with a given value, to copy the value of one string to another, or to set a sub-string of a string to a new value.

  // .substr() is a member function of the std::string class that returns a substring of the string. It takes two arguments: the starting position of the substring, and the length of the substring.

  // news.assign(olds,2,3) is same as news = olds.substr(2,3);

  // std::string str="to be question";
  // std::string str2="the ";
  // std::string str3="or not to be";
  // std::string::iterator it;

  // used in the same order as described above:
  // str.insert(6,str2);                 // to be (the )question
  // str.insert(6,str3,3,4);             // to be (not )the question
  // str.insert(10,"that is cool",8);    // to be not (that is )the question
  // str.insert(10,"to be ");            // to be not (to be )that is the question
  // str.insert(15,1,':');               // to be not to be(:) that is the question
  // it = str.insert(str.begin()+5,','); // to be(,) not to be: that is the question
  // str.insert (str.end(),3,'.');       // to be, not to be: that is the question(...)
  // str.insert (it+2,str3.begin(),str3.begin()+3); // (or )
  

  
  return 0;
}