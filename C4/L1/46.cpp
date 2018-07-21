
//好好模拟一下除法过程就会明白

#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main(){
    int i,j,k,n,m;
    long long f1,f2,f3;
    cin >> f1;
    n=0;
    for(f2=1;f2<f1;f2=f2*10+1)
        n++;;//f2为大于f1的第一个数 /*important!*/
    while(1){   //不用管有多少个1，只管能整除就行，根据最基础的除法的定义
        n++;
        if(f2%f1==0){
            cout << f2/f1;
            break;
        }else{
            cout << f2/f1;
            f2%=f1;
            f2=f2*10+1;
        }
    }
    cout << " " << n<<endl;
    return 0;
}
