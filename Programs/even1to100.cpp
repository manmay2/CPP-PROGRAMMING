//Display even numbers from 1 to 100
#include<iostream>
using namespace std;
int main()
{
    int i;
    for(i=1;i<=99;i++){
        if(i%2==0){
            cout<<i<<" ";
        }
    }
    return 0;
}