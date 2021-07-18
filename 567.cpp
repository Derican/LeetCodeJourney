#include <cstdio>
#include <iostream>
using namespace std;

bool equalMap(int *v1, int *v2, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (v1[i] != v2[i])
            return false;
    }
    return true;
}
bool checkInclusion(string s1, string s2)
{
    int n = s1.length(), m = s2.length();
    int vis[26] = {0}, win[26] = {0};
    for (auto c : s1)
    {
        vis[c - 'a']++;
    }
    int start = 0, end = n;
    for (int i = start; i < end; i++)
    {
        win[s2[i] - 'a']++;
    }
    while (end < m)
    {
        if (equalMap(vis, win, n))
        {
            cout << vis['h' - 'a'] << ' ' << win['h' - 'a'] << endl;
            cout << start << ' ' << end << endl;
            return true;
        }

        win[s2[start] - 'a']--;
        win[s2[end] - 'a']++;
        start++;
        end++;
    }
    return equalMap(vis, win, n);
}

int main()
{
    string s1("hello");
    string s2("ooolleoooleh");
    checkInclusion(s1, s2);
    return 0;
}