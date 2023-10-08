#include <iostream>
#include <string>

using namespace std;

string ans(char g[8][8]) {
    string m;
    for (int r= 0;r<8;r++) {
        for (int c=0;  c<8;c++) {
            if (g[r][c] != '.') {
                m+=g[r][c];
            }
        }
    }
    return m;
}

int main() {
    int t;
    cin>>t;

    for(int l=1;l<= t;l++){
        char g[8][8];
        for (int i = 0;i<8;i++) {
            for (int j = 0;j<8;j++){
                cin>>g[i][j];
            }
        }

        string Answer = ans(g);
        cout <<Answer<< endl;
    }

    return 0;
}
