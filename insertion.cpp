#include<iostream>
using namespace std;

int main(){
    int score[]={12,2,3,5,6,7,89,5,7};
    int item=30, len=9,j=len-1,k=4;
    while (j>=k)
    {
        score[j+1] = score[j];
        j--;
    }
    score[k]=item;

    for(int i=0;i<=len+1;i++){
     cout << score[i] <<endl;
    }

   return 0; 
}