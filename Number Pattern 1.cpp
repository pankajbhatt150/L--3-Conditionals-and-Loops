Print the following pattern
Pattern for N = 4
1
23
345
4567
Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines
Sample Input 1 :
3
Sample Output 1 :
1
23
345
  // Solution
  #include<iostream>
using namespace std;


int main(){
    int i,j,n,k,x;cin>>n;
    for(i=1;i<=n;i++)
    {
        x=i;
        for(j=1;j<=i;j++)
        {
            cout<<x;
        x++;
        }
        for(k=1;k<=n-i;k++)
            cout<<" ";
        cout<<endl;
    }
    return 0;
    
    
    
}
