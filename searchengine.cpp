#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
void search(const vector<string>& d,const string& q){
    cout<<"Searching for :"<<q<<endl;
    for (const auto& i :d){
        string lowercase = i;
        transform(lowercase.begin(),lowercase.end(),lowercase.begin(),::tolower);
        string lowercase1 = q;
        transform(lowercase1.begin(),lowercase1.end(),lowercase1.begin(),::tolower);
        if(lowercase.find(lowercase1)!=string ::npos){
            cout<<"Found in the Document."<<endl;
        }
        else{
            cout<<"Not Found in the Document."<<endl;
        }
    }
}
int main(){
    vector<string> document ={
        "Best friends are the people in your life that make you laugh louder,smile brighter, and live better. Sometimes being with your best friend is all the therapy you need.A best friend is someone who loves you when you forget to love yourself. Friends come and go."
    };
    string word;
    cout<<"Enter the Searching Word:"<<endl;
    getline(cin,word);
    search(document,word);
    return 0;
}