#include <bits/stdc++.h>
#include <stack>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'solve' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts LONG_INTEGER x as parameter.
 */

int solve(long x) {
    int a = 1;
    int b = 0;

    stack <long> currentValue;
    currentValue.push(4);

    while (b < 9) {
        long current = currentValue.top();

        cout << current << "\n";

        currentValue.pop();

        currentValue.push(current * 10 + 4);

        currentValue.pop();

        currentValue.push(current * 10);

        b++;
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string x_temp;
        getline(cin, x_temp);

        long x = stol(ltrim(rtrim(x_temp)));

        int result = solve(x);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
