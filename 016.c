
#include <stdio.h>

int main() {
    char ch;
    printf("Enter a Alphabet");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    {
        printf("uppercase");
        
    }
    else if(ch>='a' && ch<='z')
    {
        printf("Lowecase");
        
    }
    else 
    {
        printf("digital or special character");
        
    }
    

        
    return 0;
}
