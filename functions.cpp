#include <iostream>
#include <cstdio>
using namespace std;
 int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int arr[]={a,b , c , d};
    int max = a;
 
    for(int i =0 ; i<4;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<max;
    return 0;
}
