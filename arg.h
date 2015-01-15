typedef error const char *

typedef struct token {

} token;

error split(const char *line, char ***words);
error split_at(const char *line, char ***words, char delim);

error group(const char **words, token *tokens); 


