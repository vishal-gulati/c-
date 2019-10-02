#include<fstream>
#include<iostream>
using namespace std;
int main(){
    fstream df;
    df.open("num.txt",ios::out);
    int k;
    for(k=1;k<=200;k++)
    df<<k<<" ";
    df.close();
    return 0;
}
