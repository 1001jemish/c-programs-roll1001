// Ass_1001_Q10: Count vowels in a string//
#include <stdio.h>
void main() 
{
    char name[100];
    int vowels = 0,i;
    printf("Enter a name:- ");
    fgets(name, sizeof(name), stdin); 
    puts(name);
    
    for (int i = 0; name[i] != '\0'; i++)
    {   
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u'|| name[i] == 'A'|| name[i] == 'E'|| name[i] == 'I'|| name[i] == 'O'|| name[i] == 'U') 
        {
            vowels++;
        }
    }
    printf("there are %d vowels",vowels);
}

