#include<iostream>
#include<string>
using namespace std;

int main(){
    int age,tall,rich;
    string status;
    cout << "Enter your age: ";
    cin >> age;
    if(age <= 20){
        cout << "Enter your height: ";
        cin >> tall;
        if(tall < 160)
            status = "UNFRIEND";
        else if(tall < 175)
            status = "FRIEND";
        else{
            cout <<"Enter your property: ";
            cin >> rich;
            if(rich > 69000000)
                status = "MARRIED";
            else
                status = "ONE-NIGHT-STAND";
        }
    }else if(age < 30){
        cout << "Enter your property: ";
        cin >> rich;
        if(rich > 10000000)
            status = "BEST FRIEND";
        else
            status = "UNFRIEND";
    }else
        status = "UNFRIEND";
    cout << "Your status = " << status;
    return 0;
}