#include "ffc/types.h"

typedef struct {
    uint32_t b;
    uint32_t c;
} Pair;

extern void *func_02065f50(void *self, Pair p);
extern void *func_02066238(void *self, uint32_t e, uint32_t g);
extern char data_020b18b4[];

void *func_02066204(void *self, uint32_t a, Pair s, uint32_t e, uint32_t f, uint32_t g)
{
    func_02065f50(self, s);
    ((void **)self)[0] = data_020b18b4;
    ((uint32_t *)self)[15] = f;
    ((uint32_t *)self)[7] = a;
    func_02066238(self, e, g);
    return self;
}
