/*
 * include/readprocess.h
 *
 * (C) 2014 HuangJinDong
 *
 * The readline interface of the ddsh.
 *
 */

#ifndef _READPROCESS_
#define _READPROCESS_

#include <stdio.h>

/* from the readline, we rewrite it */
char *rl_gets();
/* for commands auto-completion */
char *command_generator(const char *text, int state);
char **command_completion(const char *text, int start, int end);
/* initialize readline */
void initialize_readline();

#endif /* _READPROCESS_ */

