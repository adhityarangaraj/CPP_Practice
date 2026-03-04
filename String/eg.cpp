#include<iostream>
#include<string>
using namespace std;
void relationalOperation(string s1, string s2)

{

if (s1 != s2)

{

cout << s1 << " is not equal to " << s2 << endl;

if (s1 > s2)

cout << s1 << " is greater than " << s2 << endl;

else

cout << s2 << " is greater than " << s1 << endl;

}

else

cout << s1 << " is equal to " << s2 << endl;

}

int main()

{

string s1(" Laptop ");

string s2(" Desktop");

relationalOperation(s1, s2);

string s3("Student");

string s4("Student");

relationalOperation(s3, s4);

return 0;

}
