#include<stdio.h>
struct datastructures
{
 int id;
 char name[10];       //max name limit is ten characters
 char contact[10];    //contact no size is 10
 int pin;
};
int main(){ 
   struct datastructures firststudent;           //structure variable of type datastructures
   struct datastructures secondstudent;
   struct datastructures thirdstudent;
       
   firststudent.id = 100;
   secondstudent.id = 90;
   strcpy(firststudent.name, "sparsh");          //str(ing)cpy(copy) to assign array after declarationdata
   printf("%d\n",firststudent.id);               //use %s to print out whole string as %c only prints one character
   printf("%s\n",firststudent.name);
   printf("%s\n",firststudent.contact);
   printf("%d\n\n",firststudent.pin);
   printf("%d\n",secondstudent.id);
   printf("%s\n",secondstudent.name);
   printf("%s\n",secondstudent.contact);
   printf("%d",secondstudent.pin);
}