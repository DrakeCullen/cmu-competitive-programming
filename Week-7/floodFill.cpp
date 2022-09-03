#include <iostream>

#define FOR(i, j, k, in) for (int i=j ; i<k ; i+=in)
#define REP(i, j) FOR(i, 0, j, 1)

using namespace std;

int dr[] = {-1,-1,-1,0,0,1,1,1};
int dc[] = {-1,0,1,-1,1,-1,0,1};
int R,C;
char arr[101][101];
bool marked[101][101];

void markNeighbors(int i, int j) {
  int newR,newC;
  REP(k,8) { 
      newR=i+dr[k];
      newC=j+dc[k];
      if(newR>=0 && newR<R && newC>=0 && newC<C && !marked[newR][newC] && arr[newR][newC]=='#') {
        marked[newR][newC]=1; 
        markNeighbors(newR,newC);
      }
  }
}

int main() {
  cin>>R>>C; 
  int groups=0; 
  string input;
  REP(i,R) REP(j,C) marked[i][j]=0; 
  REP(i,R) {
    cin>>input;
    REP(j,C) arr[i][j]=input[j];
  }
  REP(i,R)
    REP(j,C)
      if(!marked[i][j] && arr[i][j]=='#') {
        marked[i][j]=1; 
        markNeighbors(i,j); 
        groups++;
      }
    
  cout<<groups;
  return 0;
}