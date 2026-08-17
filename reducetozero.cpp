#include<iostream>
using namespace std;

int reduce(int n,int a,int b){
    if(n==0) return 1;
    if (n<0) return 0;

    return reduce(n-a,a,b)+reduce(n-b,a,b);

}

int main(){
    int n,a,b;
    cout<<"eneter number";
    cin>>n>>a>>b;

    cout<<reduce(n,a,b);
}