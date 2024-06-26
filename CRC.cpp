#include <iostream>
using namespace std;

int main()
{
    string data,div,x="";
    cout<<"Enter the Data :";               //data
    getline(cin,data);
    cout<<"Enter the Div :";                //div
    getline(cin,div);
    int m=data.length(),n=div.length();      //length of data & div
    x=x+data;                            
    for(int i=1;i<=n-1;i++)                //appending n-1 zeros
        x+='0';
    for(int i=0;i<=x.length()-n;)          //bitwise xor    
    {
        for(int j=0;j<n;j++)
            x[i+j]=x[i+j]==div[j]?'0':'1';  //ternary expression for bitwise xor if both are                                                           same then 0 else 1
                                           
        for(;i<x.length() && x[i]!='1';i++);  //next value of i for                                                                                                     xor bitwise oprn
                                                            //if i!=1 then increment i or i=1 then stop
                                       
    }
    cout<< data+x.substr(x.length()-n+1);  //dislpay new value data
   
    return 0;
}