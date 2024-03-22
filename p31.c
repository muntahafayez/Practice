#include <stdio.h>
int main()
{
    char ch = 't';
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ){
        printf("%c is vowel\n", ch);
    }
    else {
      printf("%c is constant\n", ch);
    }
}
