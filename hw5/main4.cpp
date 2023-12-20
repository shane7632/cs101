#include <stdio.h>

int main() {
    int i = 12345;

    int one=i%10;
    int thou=i/1000%10;
    
    int b=i-one*1+one*1000-thou*1000+thou*1;
    
    printf("%d",b);

    return 0;
}
