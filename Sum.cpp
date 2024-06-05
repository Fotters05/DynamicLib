#include "Header.h"
#include <cstring>

bool check_chars(const char* str, const char* chars) {
    for (const char* p = chars; *p != '\0'; ++p) {
        if (strchr(str, *p) == NULL) {
            return false;
        }
    }
    return true;
}
