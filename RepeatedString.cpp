#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    long answer = 0;
    long aCount = 0;
    long mulit = n / s.length();
    long ect = n % s.length();
    for (long i = 0; i < ect; i++) {
        if (s.at(i) == 'a') {
            answer++;
        }
    }
    for (long i = 0; i < s.length(); i++) {
        if (s.at(i) == 'a') {
            aCount++;
        }
    }
    
    
    
    answer = answer + (aCount * mulit);
    return answer;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
