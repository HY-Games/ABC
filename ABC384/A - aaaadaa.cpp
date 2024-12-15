#include<iostream>
using namespace std;
int main()
{
    // 長さと置換文字列の入力
    int N;
    char c1,c2;
    cin >> N >> c1 >> c2;
    // 文字列の入力
    string S;
    cin >> S;
    // 文字列を1文字ずつ処理して結合する
    int i;
    string sout;
    for (i = 0; i < N; i++) {
    	if(S[i] == c1){
    		sout+= c1;
    	}
    	else{
    		sout+= c2;
        }
    }
    // 出力
    cout << sout;
    return 0;
}
