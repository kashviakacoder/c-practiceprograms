#include <iostream>

using namespace std;

int main()
{
    int num,i, isPrime=1;
    printf("enter number");
    scanf("%d",&num);
    if (num<=1){
        isPrime=0;
    }
    for(i=2; i<num;i++){
        if(num%i==0){
            isPrime=0;
        }
    }
    if(isPrime)
        printf("%d is a Prime number.\n",num);
    else
        printf("%d is NOt a Prime number.\n",num);
    return 0;
}
