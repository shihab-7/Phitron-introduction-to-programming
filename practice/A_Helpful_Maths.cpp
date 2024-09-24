#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    scanf("%s", s);
    int count[4] = {0};
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == '1') count[1]++;
        if (s[i] == '2') count[2]++;
        if (s[i] == '3') count[3]++;
    }
    int first = 1;
    for (int i = 1; i <= 3; i++) {
        while (count[i]--) {
            if (!first) printf("+");
            first = 0;
            printf("%d", i);
        }
    }
    return 0;
}
