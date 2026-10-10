#include "ffc/types.h"

extern void func_0207a2ac(void *p);

typedef struct {
    uint8_t pad[0x2c];
    int32_t flag : 1;
} S;

void func_0207a23c(S *s) {
    if (s->flag) {
        func_0207a2ac(s);
    }
}
