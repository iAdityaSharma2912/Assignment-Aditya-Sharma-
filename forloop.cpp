#include <iostream>
#include <cstdio>
using namespace std;
 
int main() {
    string arr[] = {"zero" , "one", "two " , "three" , "four" , "five" , "six" , "seven" , "eight" , "nine"  };
   int a , b ;
   cin>>a >>b;
   for(int i = a ;i <= b ;i++){
      if(i<=9)cout<<arr[i]<<"\n";
       else{
           if(i%2==0){
               cout<<"even"<<"\n";
           }
           else {
           cout<<"odd"<<"\n";
           }}
 
   }
    return 0;
}
 
