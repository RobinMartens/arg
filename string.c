#include "string.h"

#define WHITESPACE ' '

int string_length(const char *str) {
    int i = 0;
    for (i=0;; ++i) {
        if str[i] == '\0' {
            return i;
        }
    }
}

error split(const char *line, char ***words) {
    return split_at(line, words, WHITESPACE);
}

error split_at(const char *line, char ***words, char delim) {
    int len = string_length(line);  // safety check; optional

    int i = 0; 
    for (i=0;; i++) {
        switch(line[i]) {
        case '\0':
            return 


       }
    }
}
