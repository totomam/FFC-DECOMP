#include "ffc/types.h"

typedef struct { uint8_t v; uint8_t pad[3]; } E;
typedef struct { E e[6]; } S;

extern void func_020396c4(void *p);
extern char data_020ae900[];

void *func_0203a368(void *self, uint32_t a, uint32_t b, uint32_t c, S s) {
    uint8_t *p = (uint8_t *)self;
    func_020396c4(self);
    *(char **)p = data_020ae900;
    *(uint32_t *)(p + 0x88) = a;
    *(uint32_t *)(p + 0x8c) = b;
    *(uint32_t *)(p + 0x90) = c;
    p[0x94] = s.e[0].v;
    p[0x95] = s.e[1].v;
    p[0x96] = s.e[2].v;
    p[0x97] = s.e[3].v;
    p[0x98] = s.e[4].v;
    p[0x99] = s.e[5].v;
    return self;
}
