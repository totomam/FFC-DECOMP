/* MSL C mem/string functions (docs/sdk_map.txt names) on host libc: several matched src/ TUs of these are
 * wrappers that hand their own r1/r2 on implicitly (memset -> __fill_mem(object)), which the host cannot. */
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

void *func_02090380(void *d, const void *s, size_t n) { return memcpy(d, s, n); }
void *func_02090398(void *d, const void *s, size_t n) { return memmove(d, s, n); }
void *func_020903cc(void *d, int c, size_t n) { return memset(d, c, n); }
void *func_020903d8(const void *p, int c, size_t n) { return memchr(p, c, n); }
void *func_020903f4(const void *p, int c, size_t n)
{
    const unsigned char *q = (const unsigned char *)p + n;
    while (n--)
        if (*--q == (unsigned char)c)
            return (void *)q;
    return NULL;
}
int func_02090410(const void *a, const void *b, size_t n) { return memcmp(a, b, n); }
void func_02090448(void *d, int c, size_t n) { memset(d, c, n); }
size_t func_02092864(const char *s) { return strlen(s); }
char *func_02092878(char *d, const char *s) { return strcpy(d, s); }
char *func_020928f0(char *d, const char *s, size_t n) { return strncpy(d, s, n); }
char *func_02092924(char *d, const char *s) { return strcat(d, s); }
int func_02092948(const char *a, const char *b) { return strcmp(a, b); }
int func_02092a04(const char *a, const char *b, size_t n) { return strncmp(a, b, n); }
char *func_02092a2c(const char *s, int c) { return strchr(s, c); }
char *func_02092a54(const char *s, int c) { return strrchr(s, c); }
size_t func_02092a84(const char *s, const char *r) { return strcspn(s, r); }
char *func_02092b00(const char *s, const char *n) { return strstr(s, n); }
unsigned long func_02093748(const char *s, char **e, int b) { return strtoul(s, e, b); }
long func_020937a4(const char *s, char **e, int b) { return strtol(s, e, b); }
long long func_02093a84(const char *s, char **e, int b) { return strtoll(s, e, b); }
