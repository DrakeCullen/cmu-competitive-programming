#include <iostream>

#define FOR(i, j, k, in) for (int i=j ; i<k ; i+=in)
#define REP(i, j) FOR(i, 0, j, 1)

using namespace std;

int dr[] = {-1,-1,-1,0,0,1,1,1}; // Change in row
int dc[] = {-1,0,1,-1,1,-1,0,1}; // Change in column
int R,C; // Number of rows and columns
char arr[101][101]; // The input array
bool marked[101][101]; // The visited array

void markNeighbors(int i, int j) {
  int newR,newC;
  // For each of the 8 neighbors
  for(int k=0;k<8; k++)  { 
    // Calculate the new row and column
    newR=i+dr[k];
    newC=j+dc[k];
    // If the new row and column are within the matrix bounds and not visited and are a #
    if(newR>=0 && newR<R && newC>=0 && newC<C && !marked[newR][newC] && arr[newR][newC]=='#') {
      // Mark the cell as visited and visit its neighbors
      marked[newR][newC]=1; 
      markNeighbors(newR,newC);
    }
  }
}

int main() {
  cin>>R>>C; 
  int groups=0; 
  string input;

  // Mark all the cells as unvisited
  for(int i=0; i<R; i++) 
    for(int j=0;j<C; j++) 
      marked[i][j]=0; 

   for(int i=0; i<R; i++)  {
    // Read the input
    cin>>input;
    // For every character in the input
    // Set the character in the array to the input character in the correct row and column
    for(int j=0;j<C; j++)
      arr[i][j]=input[j];
  }

  // For every cell in the array
  for(int i=0; i<R; i++) 
    for(int j=0;j<C; j++) 
      // If the cell is not visited and is a '#'
      if(!marked[i][j] && arr[i][j]=='#') {
        marked[i][j]=1; 
        markNeighbors(i,j); 
        groups++;
      }
    
  cout<<groups;
  return 0;
}