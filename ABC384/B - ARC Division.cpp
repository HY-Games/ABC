#include<iostream>
using namespace std;
int main()
{
    // 回数とレーティングの入力
    int N,R;
    cin >> N >> R;
    // Divと成績の入力
    int D[N],A[N];
    int i;
    for (i = 0; i < N; i++) {
    	cin >> D[i] >> A[i];
    	// Div判定と成績の反映
    	if(D[i] == 1 && R >= 1600 && R <= 2799){
    		R = R + A[i];
    	}
    	else if(D[i] == 2 && R >= 1200 && R <= 2399){
    		R = R + A[i];
    	}
    }
    // 出力
    cout << R;
    return 0;
}
