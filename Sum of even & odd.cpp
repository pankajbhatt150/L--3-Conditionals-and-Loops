Write a program to input an integer N and print the sum of all its even digits and sum of all its odd digits separately.
Digits mean numbers, not the places! That is, if the given integer is "13245", even digits are 2 & 4 and odd digits are 1, 3 & 5.
Input format :
 Integer N
Output format :
Sum_of_Even_Digits Sum_of_Odd_Digits
(Print first even sum and then odd sum separated by space)
Constraints
0 <= N <= 10^8
Sample Input 1:
1234
Sample Output 1:
6 4
Sample Input 2:
552245
Sample Output 2:
8 15
Explanation for Input 2:
// Solution
#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int n,sum_e=0,sum_o=0,x;
    cin>>n;
    for(n=n;n>0;n/=10)
    {
        x=n%10;
        if(x%2==0)
            sum_e=sum_e+x;
        else
            sum_o=sum_o+x;
    }
    cout<<sum_e<<" "<<sum_o;
}
