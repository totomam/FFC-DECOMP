#include "ffc/types.h"
typedef struct { uint8_t pad[0x128]; int n; } S;
extern int func_0207a09c(S*, int, int);
int func_0207bde4(S *p, int a, int b) {
    int n = p->n;
    if (n == 0) {
        if (func_0207a09c(p, a, b) == 0) return 0;
    }
    p->n++;
    return 1;
}
