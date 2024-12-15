#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

struct Struct{
	string name;
	int point;
	
	bool operator<(const Struct& another) const {
		if(point == another.point){
			return name > another.name;
		}
		else{
		    return point < another.point;
		}
    }
};

int main()
{
    // 配点の入力
    int a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    // 31人の得点結果作成
    // 組み合わせ生成よりも全部列挙の方が早そう
    array<Struct, 31> t;
    t[0].name = "ABCDE";
	t[1].name = "BCDE";
	t[2].name = "ACDE";
	t[3].name = "ABDE";
	t[4].name = "ABCE";
	t[5].name = "ABCD";
	t[6].name = "CDE";
	t[7].name = "BDE";
	t[8].name = "ADE";
	t[9].name = "BCE";
	t[10].name = "ACE";
	t[11].name = "BCD";
	t[12].name = "ABE";
	t[13].name = "ACD";
	t[14].name = "ABD";
	t[15].name = "ABC";
	t[16].name = "DE";
	t[17].name = "CE";
	t[18].name = "BE";
	t[19].name = "CD";
	t[20].name = "AE";
	t[21].name = "BD";
	t[22].name = "AD";
	t[23].name = "BC";
	t[24].name = "AC";
	t[25].name = "AB";
	t[26].name = "E";
	t[27].name = "D";
	t[28].name = "C";
	t[29].name = "B";
	t[30].name = "A";
    
    t[0].point = a+b+c+d+e;
	t[1].point = b+c+d+e;
	t[2].point = a+c+d+e;
	t[3].point = a+b+d+e;
	t[4].point = a+b+c+e;
	t[5].point = a+b+c+d;
	t[6].point = c+d+e;
	t[7].point = b+d+e;
	t[8].point = a+d+e;
	t[9].point = b+c+e;
	t[10].point = a+c+e;
	t[11].point = b+c+d;
	t[12].point = a+b+e;
	t[13].point = a+c+d;
	t[14].point = a+b+d;
	t[15].point = a+b+c;
	t[16].point = d+e;
	t[17].point = c+e;
	t[18].point = b+e;
	t[19].point = c+d;
	t[20].point = a+e;
	t[21].point = b+d;
	t[22].point = a+d;
	t[23].point = b+c;
	t[24].point = a+c;
	t[25].point = a+b;
	t[26].point = e;
	t[27].point = d;
	t[28].point = c;
	t[29].point = b;
	t[30].point = a;

    // ソート
    sort(t.rbegin(),t.rend());
    // 出力
    int i;
    for(i = 0; i < 31; i++){
    	cout << t[i].name << endl;
    }
    return 0;
}
