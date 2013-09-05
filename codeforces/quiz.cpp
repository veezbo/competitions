//Quick Solution to Problem 334A on Codeforces
//Can be seen here: http://codeforces.com/problemset/problem/334/A

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string to_string(int i);

int N, val;
string s = "";

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        int f = N*N - i;
        for (int j = 0; j < N/2; j++) {
            if (j == N/2 - 1) {
                cout << to_string(f) + " " + to_string(f-2*(N-i)+1);
            }
            else {
                cout << to_string(f) + " " + to_string(f-2*(N-i)+1) + " ";
            }
            f -= 2*N;
        }
        cout << endl;
    }
    return 0;
}

string to_string(int i)
{
    stringstream ss;
    if (!(ss << i)) //can also add optional setprecision(x) for x decimal digits
         cout << "BadConversion(to_string(int))" << endl;
    return ss.str();
}