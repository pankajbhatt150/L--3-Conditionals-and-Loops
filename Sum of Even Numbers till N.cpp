Given a number N, print sum of all even numbers from 1 to N.
Input Format :
Integer N
Output Format :
Required Sum 
Sample Input 1 :
 6
Sample Output 1 :
12
  // solution
  
#include<iostream>
using namespace std;
int main() {
 int i, N, s=0;
 cin>>N;
    for(i=1;i<=N;i++)
    {
        if(i%2==0){
        s=s+i; 
        }
    }cout<<s;
 return 0;
}
