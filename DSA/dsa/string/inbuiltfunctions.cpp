#include <iostream>      
#include <cstddef>    
#include<string>
using namespace std;    

int main ()
{
  string str ("look for non-alphabetic charactesrl"); //s1

  int found = str.find_first_not_of("ol"); //s2
  //find_first_not_of : first occurence of a char in s1 that is not in s2

  if (found!=string::npos) //npos means until the end of string : defined with -1

  {
    cout << "The first non-alphabetic character is " << str[found];
    cout << " at position " << found << '\n';
  }
  else{cout<<"no other char is present in s1.";}

  return 0;
}