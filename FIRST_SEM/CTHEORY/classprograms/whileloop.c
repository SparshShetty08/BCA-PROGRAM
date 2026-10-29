#include<stdio.h>
int main(){
int i = 1;
int j = 1;
while (i <= 6){
  while ( j <= i){
    printf("%d",j);
    j++;
  }
  i++;
}
return 0;
}
// output:
//    1
//    12
 //   123
 //   1234
//    12345
  //  123456