#include<iostream>
using namespace std;
int main()
{
    // マス目の入力
    string s;
    cin >> s;
    // 1が書かれたマスを数える
    int count = 0;
    for(int i = 0; i < 3; i++){
      if(s.at(i) == '1'){
      	count++;
      }
    }
    // 出力
    cout << count;
    return 0;
}
