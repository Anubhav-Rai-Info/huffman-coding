// C++ program to convert
// string into binary string
#include <bits/stdc++.h>
#include <fstream>
using namespace std;

ifstream ifs;
ofstream ofs("inputascii.txt", ios::trunc);

// utility function
void strToBinary(string s)
{
    int n = s.length();


    for (int i = 0; i <= n; i++)
    {
        // convert each char to
        // ASCII value
        int val = int(s[i]);

        // Convert ASCII value to binary
        string bin = "";
        while (val > 0)
        {
            (val % 2) ? bin.push_back('1') :
                bin.push_back('0');
            val /= 2;
        }
        reverse(bin.begin(), bin.end());
        ofs.fill('0');
        ofs<<setw(8);
        ofs << bin;
    }
}

// driver code
int main()
{
    ifs.open("input.txt");
    string s;
    string scopy;
    while (ifs.peek() != EOF) {
        getline(ifs, scopy);
        s += scopy;
        // code here
    }

    cout << s << endl;
    strToBinary(s);
    return 0;
}