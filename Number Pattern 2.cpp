Print the following pattern
Pattern for N = 4


The dots represent spaces.



Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines
Sample Input :
5
Sample Output :


The dots represent spaces.
  // Solution
  #include<iostream>
using namespace std;


int main(){
    int i,j,n,k,x;cin>>n;
    for(i=1;i<=n;i++)
    {
    for(k=1;k<=n-i;k++) 
          cout<<" ";
    
        x=i;
        for(j=1;j<=i;j++)
        {
            cout<<x;
        x++;
        }
            cout<<endl;
    }
    return 0;
   
    
  
}
