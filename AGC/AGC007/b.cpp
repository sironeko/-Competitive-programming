﻿#include <bits/stdc++.h>

#define MP make_pair
#define PB push_back
#define ALL(x)  (x).begin(),(x).end()
#define RALL(x) (x).rbegin(),(x).rend()
#define RANGEBOX(x,y,maxX,maxY) (0 <= (x) && 0 <= (y) && (x) < (maxX) && (y) < (maxY))
#define RANGE(x, l, r) ((l) <= (x) && (x) <= (r))
#define rep(i, N)  for (int i = 0; i < (int)(N); i++)
#define rrep(i, N) for (int i = N - 1; i >= 0; i--)
#define REP(i, init, N)  for (int i = (init); i < (int)(N); i++)
#define RREP(i, N, last) for (int i = (init - 1); i >= last; i--)
#define PB push_back

using namespace std;

typedef long long LL;
typedef unsigned long long ULL;
typedef vector<int> VI;
typedef vector<VI > VVi;
typedef vector<string> VS;
typedef vector<LL> VLL;
typedef pair<int,int> PII;

const int    INF  = 0x3f3f3f3f;
const LL     INFL = 0x3f3f3f3f3f3f3f3fLL;
const double DINF = 0x3f3f3f3f;

int main(){
	ios::sync_with_stdio(false);
    int w,h,n;
    cin>>w>>h>>n;
    VI x(n),y(n),a(n);
    int s[100][100];
    rep(i,n){
        cin>>x[i]>>y[i]>>a[i];
    }
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){
            s[i][j] = 0;//白
        }
    }
    rep(i,n){
        if(a[i] == 1){
            for(int t=x[i];t<)
        }

    }
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cout<<s[i][j];
        }
        cout<<endl;
    }
    return 0;
}
