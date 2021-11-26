#include<iostream>
using namespace std;

int main(){
    int E=0;
    int O=0;
    int sum=0;
    int input=input+sum;
    while (input != 0)
    {
        cout << "Enter an integer: ";
        cin >> input;
            if (input%2 == 0){
                E+=1;
            }else{
                O+=1;
            }
    }
    cout << "#Even numbers = "<<E-1<<"\n";
    cout << "#Odd numbers = "<<O<<"\n";
    return 0;
}