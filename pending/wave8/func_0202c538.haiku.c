#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x34];
    uint32_t v;
} S;

extern void func_02023e54(uint32_t v);

void func_0202c538(S *p)
{
    if (p->v) {
        func_02023e54(p->v);
    }
}
