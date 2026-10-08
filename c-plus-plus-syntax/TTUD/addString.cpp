#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    if(fopen("data.inp", "r")){
        freopen("data.inp", "r", stdin);
    }

    int num1, num2;
    cin >> num1 >> num2;

    string str1, str2, sum = "";
    int bal = 0, index1, index2;

    str1 = to_string(num1);
    str2 = to_string(num2);
    index1 = str1.size() - 1;
    index2 = str2.size() - 1;

    while(index1 >= 0 || index2 >= 0 || bal > 0){
        int digit1 = (index1 >= 0) ? (str1[index1] - '0') : 0;
        int digit2 = (index2 >= 0) ? (str2[index2] - '0') : 0;

        int temp_sum = digit1 + digit2 + bal;

        sum += to_string(temp_sum % 10);
        bal = temp_sum / 10;

        index1--;
        index2--;
    }

    reverse(sum.begin(), sum.end());
    cout << sum << endl;
    return 0;
}
