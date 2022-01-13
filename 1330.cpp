#include <iostream>
#include <string> 

using namespace std;

int main(){
    
    string num;

    getline(cin,num,'/');

    char c = num[0];
    char d = num[2];

    int a = c-'0';
    int b = d-'0';

    if (a > b){

        cout<<">"<<endl;
    }else if (a < b){

        cout<<"<"<<endl;
    }else{

        cout<<"=="<<endl;
    }


    return 0;
}