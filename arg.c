#include "arg.h"

#define WHITESPACE ' '

error split(const char *line, char ***words) {
    return split_at(line, words, WHITESPACE);
}

error split_at(const char *line, char ***words, char delim) {
    int len = string_length(line);


}
