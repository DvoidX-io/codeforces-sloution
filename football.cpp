#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    scanf("%s", s);

    int count = 1;

    for (int i = 1; i < strlen(s); i++) {
        if (s[i] == s[i - 1]) {
            count++;
            if (count >= 7) {
                printf("YES");
                return 0;
            }
        } else {
            count = 1;
        }
    }

    printf("NO");
    return 0;
}
