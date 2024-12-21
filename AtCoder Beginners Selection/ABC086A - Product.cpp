#include<iostream>
using namespace std;
int main()
{
    // 二つの正整数の入力
    int a,b;
    cin >> a >> b;
    // 積が奇数ならOdd、偶数ならEvenを設定
    string parity;
    if(a*b%2 == 1){
      parity = "Odd";
    }
    else{
      parity = "Even";
    }
    // 出力
    cout << parity;
    return 0;
}
