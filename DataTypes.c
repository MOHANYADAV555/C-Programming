#include<stdio.h>
int main()
{
    /* declare the variable */
    int a = 10;
    float p,q;
    p=2.45;
    q=3.76;
    double r = 5.8494;
    char c = 'c' ;/* character use only single quotes */
    /* format specifiers
        int   = "%d"
        char  = "%c"
        float = "%f"
        string = "%s"  */

    printf("%d\n",a);
    printf("%f %f\n",p,q);
    printf("%f\n",r);
    printf("%c\n",c);

    printf("values of variables %d,%f,%f,%f,%c",a,p,q,r,c);
    printf("\nvalues of variables %d %f %f %f %c",a,p,q,r,c);
    return 0;

}
