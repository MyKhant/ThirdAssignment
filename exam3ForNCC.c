//
// Created by Fujitsu on 9/4/2022.
// Myo Khant Kyaw
// myoKhantkyaw148@gmail.com
#include <stdio.h>

int main(void) {

    // array of pointers
    char *cityPtr[4] = {
            "Yangon",
            "Mandalay",
            "MaGwe",
            "BaGan"
    };

    int  c;

    for (int i= 0; i < 4; i++) {
        c = 0;
        while(*(cityPtr[i] + c) != '\0') {
            printf("%c", *(cityPtr[i] + c));
            c++;
        }
        printf("\n");
    }

    return 0;
}
