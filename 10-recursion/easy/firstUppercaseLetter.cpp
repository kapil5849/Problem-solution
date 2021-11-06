
// First Uppercase Letter in a String...

#include<iostream>
using namespace std;
char first(string s,int i=0){
    if(s.length()==0){
        return 0;
    }
    if(isupper(s[i])){
        return s[i];
    }
    return first(s,i+1);
}
int main(){
    string s="kapilVaishnav";
    char res=first(s);
    if(res==0){
        std::cout << "no uppercase letter" << std::endl;
    }
    else{
        cout<<res<<endl;
    }
    return 0;
}
