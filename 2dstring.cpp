#include <stdio.h>

int main() {
    char names[3][20] = {
        "Venkatesh",
        "Rahul",
        "Amit"
    };

    for (int i = 0; i < 3; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}