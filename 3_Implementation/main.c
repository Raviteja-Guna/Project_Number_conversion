#include "number.h"
int main() {
    int choice;
    printf("Enter");
    scanf("%d",&choice);
switch(choice) {
case 1:
     printf("Enter binary number\n");
     printf("The decimal equivalent is %d\n",bin_to_dec("1011"));
     break;
case 2:
     printf("Enter hexadecimal number\n");
     printf("The decimal equivalent is %d\n",hex_to_dec("f"));
     break;
case 3:
     printf("Enter octal number\n");
     printf("The decimal equivalent is %d\n",oct_to_dec(13));
     break;
}
return 0;
}
