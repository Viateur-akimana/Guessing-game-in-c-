#include <iostream>
using namespace std;
int main(){
int marks[100][100];
int m, n; 
cin>>m>>n;
              for (int i=0;i<m;i++){  
		for (int j=0;j<n;j++){
                   cin>> marks[i][j];
                             }
                        }
                        for (int k=0; k<m; k++){
                          for (int t=0; t<n;t++){
                              cout<<marks[k][t]<<" ";
                            }
                              cout<<endl;
                        }

return 0;
}
