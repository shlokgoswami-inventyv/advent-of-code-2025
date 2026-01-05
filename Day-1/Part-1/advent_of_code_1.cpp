#include<bits/stdc++.h>
using namespace std;
int helper(int curr,int a,char c){

    if(c=='L'){
        if(curr-a<0){
            return 100+(curr-a);
        }
        else{
            return curr-a;
        }
    }
    else{

        if(curr+a>99){
            return curr+a-100;
        }
        else{
            return curr+a;
        }
    }
}
int main(){

    int curr=50,c=0;
    string n="";

    while(cin>>n && n!="end"){
        string num="";
        for(int i=1;i<n.size();i++){
            num=num+n[i];
        }
        int a= stoi(num);
        curr= helper(curr,a%100,n[0]);

        if(curr==0){
            c++;
        }
    }
    cout<<"answer is : "<<c<<endl;

    return 0;
}
