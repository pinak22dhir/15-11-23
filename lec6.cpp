//while loop
#include<iostream>
using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int sum=0;
//     int i=1;
//     while(i<=n){
//         sum+=i;
//         i++;
//     }
//     cout<<sum<<endl;
// }
int main(){
    int i=5;
    while(true){
        if(i%7==0){
            cout<<i<<endl;
            break;
        }
        i+=5;
    }
    for(int i=5;;i+=5){
        if(i%7==0){
            cout<<i<<endl;
            // break;
            continue;
        }
        //do while loop
        int n;
        cin>>n;

        int sum=0;
        do{
            int num;
            cin>>num;
            sum+=num;
            n--;
        }//prints 1 time
        while(n>0){
cout<<sum<<endl;
return 0;

        }

    }
return 0;
 }