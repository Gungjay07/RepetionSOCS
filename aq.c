#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isValidIPv10(char *s) {
    int len = strlen(s);
    int dotCount = 0;

    if (len < 2 || s[0] == '.' || s[len - 1] == '.') {
        return false;
    }

    for (int i = 0; i < len; i++) {
        if (s[i] == '.') {
            dotCount++;
            if (dotCount > 5 || (i > 0 && s[i - 1] == '.')) {
                return false;
            }
        } else if (s[i] < '0' || s[i] > '9') {
            return false;
        }
    }

    return dotCount == 5;
}

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        char S[105];
        scanf("%s", S);

        bool valid = isValidIPv10(S);

        printf("Case #%d: %s\n", t, valid ? "YES" : "NO");
    }

    return 0;
}
