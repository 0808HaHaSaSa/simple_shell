#ifndef MAIN_H
#define MAIN_H
void loop();
char *read_line();
char **split_line(char * line);
int dash_execute(char **args);
int dash_exit(char **);
#endif
