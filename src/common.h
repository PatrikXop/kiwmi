#ifndef UTILITY_H
#define UTILITY_H

#define SOCK_ENV_VAR  "KIWMI_SOCKET"
#define SOCK_DEF_PATH "/tmp/kiwmi.sock"

void die(char *fmt, ...);

extern const char *argv0;

#endif /* UTILITY_H */