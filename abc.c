#include <stdio.h>

int main() {
    int work, f1, d1, f2, d2, workleft;
    printf("Enter work = ");
    scanf("%d",&work);
    printf("Enter f1 = ");
    scanf("%d",&f1);
    printf("Enter d1 = ");
    scanf("%d",&d1);
    printf("Enter f2 = ");
    scanf("%d",&f2);
    printf("Enter d2 = ");
    scanf("%d",&d2);
    workleft = work  - ((f1*d1)+(f2*d2));
    printf("Left Work = %d",workleft);
    
    return 0;
}