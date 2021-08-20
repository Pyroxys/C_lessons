#include <stdio.h>

int main() {

    int var1 = 123;
    int var2 = 18;
    int var3;

    var3 = var1;
    var1 = var2;
    var2 = var3;

    printf("var1= %d et var2= %d\n", var1, var2);
    return 0;


}