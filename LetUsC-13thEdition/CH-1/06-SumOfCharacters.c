#include<stdio.h>

int getValueByIndex(int value, int index);
int main()
{
    printf("Enter the five digit number.\n");
    int fiveDigitNumber, sum;
    scanf("%d", &fiveDigitNumber);
    sum = fiveDigitNumber & 0x0f + fiveDigitNumber & 0xf0 + 
    fiveDigitNumber & 0xf00 & fiveDigitNumber
    printf("Entered characters is :%d\n", fiveDigitNumber);
    return 0;
}

int getValueByIndex(int value, int index)
{
    int retVal = value & (0x0f << index);
    return retVal;
}
