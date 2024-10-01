#include <stdio.h>

int main() {
    char hello[] = "Hello!";
    char hello2[] = { 72, 101,//default as decimal
        108, 108, 111, 33, 0 };
    char hello3[] = { 0b1001000, 0b1100101, 0b1101100, 0b1101100, 0b1101111, 0b100001, 0b0 };

    puts(hello);
    puts(hello2);
    puts(hello3);

    printf("%c %c %c\n", hello[0], hello[1], hello[2]); //%c means character
    printf("%d %d %d\n", hello[0], hello[1], hello[2]); //%d means decimal
    printf("%x %x %x\n", hello[0], hello[1], hello[2]); //%x means hexadecimal
    printf("%s", hello); //%s means string
    //hello   |H|e|l|l|o|!|0|
    //decimal |72|101|108|108|111|33|0|
    //hex     |48|65|6c|6c|6f|21|0|
    //binary  |01001000|01100101|01101100|01101100|01101111|00100001|00000000|
    //01001111 in decimal is 79
    //%ld is long decimal
    //%s is string

}