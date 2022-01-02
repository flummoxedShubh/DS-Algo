/*
    450-DSA-Cracker
	->Reverse string
    by Shubh Sharma

    Input: s = ["h","e","l","l","o"]
    Output: ["o","l","l","e","h"]

    Input: s2 = ["H","a","n","n","a","h"]
    Output: ["h","a","n","n","a","H"]
*/
#include <string>
#include <iostream>

std::string reverse(std::string s)
{
    std::string temp;

    for(int i = s.length() - 1; i >=0; i--)
    {
        temp.push_back(s[i]);
    }

    return temp;
} 

void print(std::string s)
{
    std::cout << s << std::endl;
}

int main()
{
    std::string s = "hello";
    print(s);
    s = reverse(s);
    print(s);

    std::string s2 = "Hannah";
    print(s2);
    s2 = reverse(s2);
    print(s2);

    return 0;
}