#include <iostream>
using namespace std;
int main(){
    int start, end;
    cout<< "Enter the starting number: ";
    cin>> start;
    cout<< "Enter the ending number: ";
    cin>> end;
    cout<<"Prime numbers between"<< start <<"and"<< end <<"are:\n";
    for(int i= start;i<= end;i++){
        if (i<2)
        continue;
        bool isprime=true;
        
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                isprime=false;
                break;
            }
        }
    if(isprime)
    cout<<i<<" ";
    }
    return 0;
}