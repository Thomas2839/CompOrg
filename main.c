#include <stdio.h>

int hexValue = 0000;
int octalValue = 000000;
int decimalValue = 0;
char inputMode[] = "Dec"; // By making these global variables we ensure they remain on recursive calls

void createMenu() {
    int optInput;

    char menu[500]; // Ensure the buffer is large enough

    snprintf(menu, sizeof(menu),
        "****************************************\n" //TODO The function will overlap w\ itself on repeat calls. Solve that case by case
        "* Base Values:         Input Mode: %s *\n"
        "*   Hex     :  %04X                    *\n"
        "*   Octal   :  %06o                  *\n"
        "*   Decimal :  %d                       *\n"// TODO Remove dynamic asterisk placement
        "****************************************\n"
    "\n"
    "Please select one of the following options:\n\n"
    "O  Octal Mode\n"
    "H  Hexadecimal Mode\n"
    "D  Decimal Mode\n\n"
    "C  Clear Value\n"
    "S  Set Value\n\n"
    "Q Quit\n\n"
    "Option: ",
    inputMode, hexValue, octalValue, decimalValue);

    printf("%s", menu);

    scanf(" %c", &optInput);

    switch (optInput)
    {
    case 'O':
        strcpy(inputMode, "Oct");
        break;
    case 'H':
        break;
    case 'D':
        break;
    case 'C':
        break;
    case 'S':
        printf("Enter Octal Value: ");
        scanf("%o", &octalValue);  // Fixed: Read octal value properly
        decimalValue = octalValue;
        hexValue = octalValue;
        break;
    case 'Q':
        break;
    default:

    }
    createMenu();
}

int main(void)
{
    createMenu();
    //printf("%c", userInput);
    return 0;
}