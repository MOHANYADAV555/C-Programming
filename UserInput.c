#include<stdio.h>
main()
{
    int a,b,result;
    printf("Enter a value : ");
    scanf("%d",&a);
    printf("Enter a value :");
    scanf("%d",&b);

    result = a+b;
    printf("The sum of %d and %d is  %d",a,b,result);
    printf("\n%d",result);
    return 0;
}
