#include <stdio.h>
#include <string.h>

int MinhDuc_Login(const char *username, const char *password) {
    if (strcmp(username, "MinhDuc") == 0 &&
        strcmp(password, "123456") == 0) {
        return 1;
    }

    return 0;
}
