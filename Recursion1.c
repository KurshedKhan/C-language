// C Program to calculate the sum of first N Natural numbers.

#include <stdio.h>

int nSum(int n){

    int res;
    if(n == 0 ){
        return 0 ;
    }

    res = n + nSum(n-1); // res += nSum() => res = res + nSum() ==> Wrong

    return res;

}

int main(){

    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    int TotalSum = nSum(n);
    printf("Total of Natural Number : %d",TotalSum);
    return 0;
}