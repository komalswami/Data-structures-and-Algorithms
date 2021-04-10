#include <bits/stdc++.h>
using namespace std;
void printOccurrences(string txt, string pat)
{
    int found = txt.find(pat);
    while (found != string::npos) {
        cout << "Pattern found at index " << found << endl;
        found = txt.find(pat, found + 1);
    }
}

int main()
{
    string txt,pat;
    getline(cin,txt);
    cin>>pat;
    printOccurrences(txt, pat);
    return 0;
}
