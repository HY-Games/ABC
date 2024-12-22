#include<iostream>
using namespace std;
int main()
{
    // 3つの整数の入力
    int A, B, C;
    cin >> A >> B >> C;
    // 3グループ時の判定
    string judge = "No";
    if(A == B && B == C){
    	judge = "Yes";
    }
    // 2グループ時の判定
	if((A + B) == C){
    	judge = "Yes";
    }
    if((A + C) == B){
    	judge = "Yes";
    }
	if((B + C) == A){
    	judge = "Yes";
    }
    // 出力
    cout << judge;
    return 0;
}
