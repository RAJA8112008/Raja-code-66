#include<iostream>
using namespace std;
int main(){
    int n=50;
    int evensum=0;
    for(int i=1;i<=n;i++){
        if(n%2==0){
            evensum+=i;
        }
    }
    cout<<"evensum="<<evensum<<endl;
    return 0;
}
