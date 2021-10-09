/* Упражнение 18* Направете бягаща светлина, като приемете, че всеки бит от
дадена променлива, е свързан с лампа (или светодиод). Когато битът е
нула, лампата не свети, когато е единица свети.
Примерно, ако генерирате последователност:
1, 2, 3, 4, се получава следното:
1 *....................
2 .*...................
4 ..*..................
8 ...*................. ...
За да генерирате закъснение, използвайте следната функция от C runtime:
*/

#include <stdio.h>
#include <Windows.h>

int main() {

    int binary = 178956970; //178956970 = 0b1010101010101010101010101010

    int currentBit = 0;

    int seconds = 0;

    int remainigIterations = 0;

    int lampRotationMax = 20;

    int totalSeconds = 0;

    for(int i = 0; i < lampRotationMax; i++) {

        totalSeconds = totalSeconds + i; // 0 + 0 = 0 + 1 ; 1 + 2; 2 + 3 ; 3 + 4;

    }

    int minutes = totalSeconds / 60;

    int remainderSeconds = totalSeconds % 60;

    for(int i = 0; i < lampRotationMax; i++) {

        remainigIterations = lampRotationMax - i;

        currentBit = ( (binary >> i) & 1);

        printf("\n\t-- The program total time: %d minutes and %d seconds -- \n", minutes, remainderSeconds );

        if(currentBit == 1) {
            printf("\n \tThe lamp is on  | ");
        } else {
            printf("\n \tThe lamp is off | ");
        }

        printf(" Lamp button will change after %d seconds | ", i);

        printf(" The lamp loop will stop after %d iterations\n\n", remainigIterations);

        printf("\t%d ", i);

        for(int j = 0; j < i; j++) {

            printf(".");
        }

        printf("*..");

        seconds = i * 1000;

        Sleep(seconds);

        system("cls");
    }

    printf("The lamp is turn off. Bye.");

    return 0;
}
