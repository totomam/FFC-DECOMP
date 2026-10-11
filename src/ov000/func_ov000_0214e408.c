#include "ffc/types.h"

typedef struct {
    uint32_t a;
    int8_t *b;
} S;

extern void func_ov000_0214795c(void);

int func_ov000_0214e408(S *p) {
    int32_t r2 = 1;
    int32_t v = p->b[0xaf];
    if (v != 0 && v != 4) {
        r2 = 0;
    }
    if (r2 != 0) {
        func_ov000_0214795c();
    }
    return 0;
}
