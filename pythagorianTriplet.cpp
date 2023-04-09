#include<iostream>
using namespace std;
bool check(int x,int y,int z){
    int a;
     a=max(x,max(y,z));
    int b,c;
    if(a==x){
        b=y;
        c=z;
    }
    else if(a==y){
        b=a;
        c=z;
    }
    else{
        b=x;
        c=y;
    }
    if(a*a==b*b+c*c){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(check(a,b,c)){
        cout<<"pythagorian triplet";
    }
    else{
        cout<<"not pythagorian triplet";
    }
    return 0;
}