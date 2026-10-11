#include "ffc/types.h"

extern int func_ov001_02180870(void *p, int a, int b);

typedef struct {
    uint8_t pad[0xc];
    int32_t f;
} S;

int func_ov001_02181168(void *p) {
    S *s = (S *)p;
    int f = s->f;
    int r2;
    if (f == 7) {
        return 1;
    }
    r2 = 0;
    if (f != 6) {
        r2 = 1;
    }
    if (func_ov001_02180870(p, 2, r2) == 0) {
        return 0;
    }
    return 1;
}
