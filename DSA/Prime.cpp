#include<iostream>
using namespace std;
int main(){
    int n=29;
    int oddsum=0;
    for(int i=1;i<=n;i++){
        if(n%2!=0){
            oddsum=i;
        }
        cout<<"oddsum="<<oddsum<<endl;
    }
    return 0;
}