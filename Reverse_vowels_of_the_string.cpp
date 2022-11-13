/*
                                        Remove Vowels Of The String

                                        Given a string s, reverse only all the vowels in the string and return it.

                                        The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

                                        Input: s = "hello"
                                        Output: "holle"

                                        Input: s = "leetCode"
                                        Output: "LeotCede"

*/

#include <iostream>
#include <vector>
using namespace std;

string reverseVowels(string s);

int main(int argc, char const *argv[])
{
    string s;
    cin >> s;

    cout << reverseVowels(s) << endl;

    return 0;
}

string reverseVowels(string s)
{
    int start = 0, end = s.size() - 1;
    char vow[256] = {0};
    vow['a'] = 1, vow['A'] = 1, vow['e'] = 1, vow['E'] = 1, vow['i'] = 1, vow['I'] = 1, vow['o'] = 1, vow['O'] = 1, vow['u'] = 1, vow['U'] = 1;

    while (start < end)
    {
        while (start < end && vow[s[start]] == 0)
            start++;
        while (start < end && vow[s[end]] == 0)
            end--;

        swap(s[start], s[end]);
        start++;
        end--;
    }
    return s;
}