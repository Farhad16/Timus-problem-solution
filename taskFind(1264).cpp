#include<iostream>
using namespace std;
int main()
{
    int N,M,i,j,k=0;
    cin >> N >> M;
    for(i=0;i<N;i++){
        for(j=0;j<=M;j++){
            k++;
        }
    }
    cout << k <<endl;
}
