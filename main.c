#include <stdio.h>


void createMenu() {
    int optInput;

    char menu[] =
    "****************************************\n"//The function will overlap w\ itself on repeat calls. Solve that case by case
    "* Base Values:         Input Mode: Oct *\n"
    "*   Hex     :  3435                    *\n"
    "*   Octal   :  032065                  *\n"
    "*   Decimal :  13365                   *\n"// replace placeholder values with real ones
    "****************************************\n"
    "\n"
    "Please select one of the following options:\n\n"
    "O  Octal Mode\n"
    "H  Hexadecimal Mode\n"
    "D  Decimal Mode\n\n"
    "C  Clear Value\n"
    "S  Set Value\n\n"
    "Q Quit\n\n"
    "Option: ";

    printf("%s", menu);

    scanf("%c", &optInput);

    switch (optInput)
    {
    case 'O':
        printf("Enter Octal Value\n");
        scanf("%o", &optInput);
        break;
    case 'H':
        break;
    case 'D':
        break;
    case 'C':
        break;
    case 'S':
        break;
    case 'Q':
        break;
    default:
        createMenu();
    }
}

int main(void)
{
    createMenu();
    //printf("%c", userInput);
    return 0;
}