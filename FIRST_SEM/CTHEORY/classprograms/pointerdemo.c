#include <stdio.h>
int main(){            //VALUES:
    int x = 10;          //10
    int *p = &x;         //00000002E99FFCA4
                       //OUTPUT:
    printf("%d\n",x);    //10
    printf("%d\n",*p);   //10
    printf("%p\n",&x);   //00000002E99FFCA4
    printf("%p\n",p);    //00000002E99FFCA4
    return 0;
}