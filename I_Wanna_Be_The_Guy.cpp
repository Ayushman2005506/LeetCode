#include <iostream>
#include <set>
using namespace std;

int main(){
    int n;
    cin>>n;
    set <int> s;
    while(n>0){
        s.insert(n);
        n--;
    }

    set <int> s1;
    set <int> s2;
    int p,q;
    cin>>p;
    int x;
    for(int i=0;i<p;i++){
        cin>>x;
        s1.insert(x);
    }
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>x;
        s2.insert(x);
    }
    s1.insert(s2.begin(),s2.end());

    if(s1.size()==s.size()){
        cout<<"I become the guy.";
    }
    else{
        cout<<"Oh, my keyboard!";
    }

    return 0;

}
