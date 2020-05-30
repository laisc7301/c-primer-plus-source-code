#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch;
    printf("Give me a letter of the alphabet, and I will give ");
    printf("an animal name\nbeginning with that letter.\n");
    printf("Please type in a letters=: type # to end my end.\n");
    while((ch = getchar()) != '#')
    {
        if('\n' == ch)
            continue;
        if(islower(ch))
            switch(ch)
            {
                case 'a':
                    printf("argali, a wild sheep of Asian\n");
                    break;
                case 'b':
                    printf("babirusa, a wild pig og Malay\n");
                    break;
                case 'c':
                    printf("coati, racoonike mammal\n");
                    break;
                case 'd':
                    printf("desman, aquatic, molelike critter\n");
                    break;
                case 'e':
                    printf("echidna, the spiny anteater\n");
                    break;
                case 'f':
                    printf("fisher, brownish, marten\n");
                    break;
                default:
                    printf("That's a stumper!\n");
            }
        else
            printf("I recognize only lowercase letters.\n");
        while(getchar() != '\n') continue;
        printf("Please type another letter or a #.\n");    
    }
    printf("Bye!\n");
    getchar();
    getchar();
    return 0;
}
