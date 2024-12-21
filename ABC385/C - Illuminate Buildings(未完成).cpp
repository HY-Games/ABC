#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  // ビル数の入力
  int N;
  cin >> H;
  // 高さの入力
  vector<int> building_height(N);
	vector<vector<int>> height_array(3001, vector<int>);    
	for(int i = 0; i < N; i++){
    cin >> building_height.at(i);
    height_array.at(building_height.at(i)).push_back(i);
	}
	// ビルの選択
	int building_number = 1;
	// 高さが同じビルの間隔を調査
	for(int i = 0; i < 3001; i++){
		int size = height_array.at(i).size;
		if(size > 1){
			for(int j = 0; j < size-1; j++){
				int space = height_array.at(i).at(j+1) - height_array.at(i).at(j);
				int count = 0;
				int target = 0;
				for(int k = height_array.at(i).at(0); k < N; k = k + space){
					if(height_array.at(i).at(target) == k){
						count++;
						target++;
					}
					else(height_array.at(i).at(target) > k){
						for(height_array.at(i).at(target) <= k - space){
							int next_target = target;
						}
					}
				}
			}
		}
	}
	
  // 出力
  cout << building_number;
  return 0;
}
