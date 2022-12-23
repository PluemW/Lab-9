#include <iostream>
using namespace std;

int main(){
    int a,h,b;
    string character;
    cout << "Enter your age: ";
    cin >> a;
    if(a<=25){
        cout << "Enter your height: ";
            cin >> h;
            if(h<100){
                character = "Chopper";
            }else if(h<180){
                character = "Usopp";
            }else{
                cout << "Enter your bounty: ";
                cin >> b;
                if(b>1100000000){
                    character = "Zoro";
                }else {
                    character = "Sanji";}
            }
    }else if(a<=60){
        cout << "Enter your bounty: ";
        cin >> b;
        if(b>500000000){
            character = "Jinbe";
        }else character = "Franky";
    }
    else character = "Brook";
    cout << "Your character = " << character;
}