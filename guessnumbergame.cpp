#include<iostream>
#include<cstdlib>
using namespace std;
int game(){
    int p ;
    p = 1+(rand()%100);
    return p;
}
void data(){
    int m;
    int o = game();
    cout<<" Guess the number : "<<endl;
    cin>>m;
     if (o == m) {
        cout << "Winner" << endl;
    } else {
        if (m > o) {
            cout << "Higher Value" << endl;
        } else {
            cout << "Lower Value" << endl;
        }
        
        char h;
        cout << "Try Again (Y for Yes or N for No): " << endl;
        cin >> h;
        
        if (h == 'Y' || h == 'y') {
            data();
        } else {
            cout << "Exit" << endl;
        }
    }
    
            
}
int main(){
    data();
    return 0;
}