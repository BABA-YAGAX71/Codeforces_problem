#include<bits/stdc++.h>
using namespace std;
int t,fl;
char mp[4][4];
int main(){
	cin>>t;
	while(t--){
		fl=0;
		cin>>mp[1][1]>>mp[1][2]>>mp[1][3]>>mp[2][1]>>mp[2][2]>>mp[2][3]>>mp[3][1]>>mp[3][2]>>mp[3][3];
		for(int i=1;i<=3;i++)
            if((mp[i][1]==mp[i][2]&&mp[i][2]==mp[i][3]&&mp[i][i]!='.')||(mp[1][i]==mp[2][i]&&mp[2][i]==mp[3][i]&&mp[i][i]!='.')){
                cout<<mp[i][i],fl=1;break;
            }
		if(!fl)
            if((mp[1][1]==mp[2][2]&&mp[2][2]==mp[3][3]&&mp[2][2]!='.')||(mp[1][3]==mp[2][2]&&mp[2][2]==mp[3][1]&&mp[2][2]!='.')){
                cout<<mp[2][2],fl=1;
                }
		if(!fl)
            cout<<"DRAW";
		cout<<"\n";
	}
	return 0;
}