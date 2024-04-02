#include<iostream>

using namespace std;

int main(){
    int n;
    //cout<<"Enter number:";
    cin>>n;
    if(n>=1 && n<=9){
        const char* number[]={"","one","two","three","four","five","six","seven","eight","nine" };
        cout<<number[n]<<endl;
    }else{
        cout<<"Greater than 9"<<endl;
    }
    return 0;
}

