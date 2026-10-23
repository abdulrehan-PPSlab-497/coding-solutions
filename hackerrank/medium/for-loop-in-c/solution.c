//WAP to print EVEN no ODD numbers using for loop with switch case
#include <stdio.h>

int main() {
    int i;

    for (i = 8; i <= 9; i++) {
        switch (i) {
            case 8:
                printf("eight\n");
                break;
            case 9:
                printf("nine\n");
                break;
        }
    }

    for (i = 8; i <= 9; i++) {
        switch (i % 2) {
            case 0:
                printf("even\n");
                break;
            case 1:
                printf("odd\n");
                break;
        }
    }

    return 0;
}
