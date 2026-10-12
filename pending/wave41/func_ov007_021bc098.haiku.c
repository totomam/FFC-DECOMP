#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *func_ov007_021bc108(void *self, Pair v);
extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021b77bc(void *obj, uint32_t a, uint32_t b, uint32_t c);
extern void *func_0203b708(uint32_t id);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov007_021c7b24;
extern Pair data_ov007_021c7b2c;

void func_ov007_021bc098(uint8_t *self)
{
    void *r6;
    void *r4;
    void *r7;
    void *obj;

    r6 = func_ov007_021bc108(self, data_ov007_021c7b24);
    r4 = func_0205681c(0xe4);
    if (r4 != 0) {
        r4 = func_ov007_021b77bc(r4, *(uint32_t *)(self + 0xbc), *(uint32_t *)(self + 0xb8), *(uint32_t *)(self + 0xc4));
    }
    r7 = func_ov007_021bc108(self, data_ov007_021c7b2c);
    obj = func_0203b708(0x1e);
    {
        uint8_t *s = self + 0x14;
        func_02056bc0(s, obj);
        func_02056bc0(s, r7);
        func_02056bc0(s, r4);
        func_02056bc0(s, r6);
    }
}
