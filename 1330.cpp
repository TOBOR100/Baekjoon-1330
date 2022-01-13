#include <iostream>
#include <string> // To use stoi function.

using namespace std;

int main(){
    
    string num[4];//ex)"1 3" contain space between 1 and 3. 

    cin.ignore('\n');
    getline(cin,num[4]);

    int a = stoi(num[0]);
    int b = stoi(num[2]);


    if (a > b){

        cout<<">"<<endl;
    }else if (a < b){

        cout<<"<"<<endl;
    }else{

        cout<<"=="<<endl;
    }


    return 0;
}