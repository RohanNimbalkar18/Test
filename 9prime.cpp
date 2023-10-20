#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number:";
    cin >> n;
    bool flag = true;
    if(n==1||n==0){
        flag = false;
    }
    {
        for (int i = 2; i <= n;i++){
        if(n%i==0)
        flag = false;
        break;
        }
    }
    if(flag)
        cout << "Prime" ;
        else
        cout << "Not prime";
        return 0;
}