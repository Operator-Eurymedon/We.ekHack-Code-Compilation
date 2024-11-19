#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'divisors' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER n as parameter.
 */

#include <iostream>
#include <cmath> // For sqrt function
using namespace std;

int divisors(int n) {
    int counter = 0;

    for (int i = 2; i <= sqrt(n); i++) { // Start at 2, increment by 1
        if (n % i == 0) {
            if (i % 2 == 0) { // Check if the divisor is even
                cout << i << endl;
                counter++;
            }

            int complement = n / i;
            if (complement != i && complement % 2 == 0) { // Check if complement is even and distinct
                cout << complement << endl;
                counter++;
            }
        }
    }

    // Check if `n` itself is an even divisor
    if (n % 2 == 0) {
        cout << n << endl;
        counter++;
    }

    return counter;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string n_temp;
        getline(cin, n_temp);

        int n = stoi(ltrim(rtrim(n_temp)));

        int result = divisors(n);

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
