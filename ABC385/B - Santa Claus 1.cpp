#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // マス目と初期配置マスの入力
    int H, W, X, Y;
    cin >> H >> W >> X >> Y;
    // マスの状態の入力
    int house_num = 0;
    string s;
    vector<vector<char>> data(H, vector<char>(W));
    for (int i = 0; i < H; i++) {
    	cin >> s;
        for (int j = 0; j < W; j++) {
        	data.at(i).at(j) = s.at(j);
        	if(s.at(j) == '@'){
        		house_num++;
        	}
        }
    }
    // 行動順の入力
    string t;
    cin >> t;
    // 行動判定
    int C = 0;					// 通過した家の数
    vector<vector<int>> house(house_num, vector<int>(2));	// 通過した家のマス記憶用
    X--;						// 配列用にマイナス
    Y--;						// 配列用にマイナス
    for(int k = 0; k < t.size(); k++){
    	//行動
    	char point;
    	if(t.at(k) == 'U'){
    		point = data.at(X-1).at(Y);
    		if(point == '.' || point == '@'){
    			X--;
    		}
    	}
    	else if(t.at(k) == 'D'){
    		point = data.at(X+1).at(Y);
    		if(point == '.' || point == '@'){
    			X++;
    		}
    	}
    	else if(t.at(k) == 'L'){
    		point = data.at(X).at(Y-1);
    		if(point == '.' || point == '@'){
    			Y--;
    		}
    	}
    	else if(t.at(k) == 'R'){
    		point = data.at(X).at(Y+1);
    		if(point == '.' || point == '@'){
    			Y++;
    		}
    	}
    	// 家の通過判定
    	if(point == '@'){
    		bool past = false;
    		if(C > 0){
	    		for(int k = 0; k < C; k++){
    				if(house.at(k).at(0) == X && house.at(k).at(1) == Y){
    					past = true;
    				}
    			}
    		}
    		if(!past){
    			house[C].at(0) = X;
    			house[C].at(1) = Y;
    			C++;
    		}
    	}
    }
    // 出力
    cout << X+1 << " " << Y+1 << " " << C;
    return 0;
}
