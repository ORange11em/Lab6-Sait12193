#include<iostream>
using namespace std;

int main(){
    int N=100;
    int i=0;
    double x[N]={};
    while ( x[N] == 0)
    {
        cout << "Enter an integer: "<<i+1;
        cin >> x[i];
        i++;
    }
    
    int E=0;
    int O=0;
    int j=0;
    while (j < i)
    {
        if ([j]%2 == 0){
            E++;
        }else{
            O++;
        } 
    j++;   
    }
    cout << "#Even numbers = "<< E ;
    cout << "#Odd numbers = " << O ;
 
    return 0;

}
