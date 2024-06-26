//Reciver side
#include <iostream>
using namespace std;

int main()
{
    string div,x;
    cout<<"Enter the recieved data :";      //recieved data
    getline(cin,x);
    cout<<"Enter the Div :";                //div
    getline(cin,div);
    int n=div.length();                     // div length
    for(int i=0;i<=x.length()-n;)           // bitwise xor
    {
        for(int j=0;j<n;j++)
            x[i+j]=x[i+j]==div[j]?'0':'1';  //ternary expression for bitwise xor if both are                                                            same then 0 else 1
        for(;i<x.length() && x[i]!='1';i++);  
    }
    for(char i :x.substr(x.length()-n+1))  //to check if there is                                                                                                    error or not
        if(i!='0')
        {
            cout<<"There is an error";
            return 0;
        }
    cout<<"No error present";
    return 0;
}
