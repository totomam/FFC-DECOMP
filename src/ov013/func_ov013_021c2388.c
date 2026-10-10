#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *func_0203b6f0(void);
extern void func_02056bc0(void *object, void *node);
extern void func_02055ae8(void *object, void *node);
extern Pair data_ov013_021c4e44;

void func_ov013_021c2388(uint8_t *self)
{
    void *v = func_0203b6f0();
    *(void **)(self + 0xec) = v;
    func_02056bc0(self + 0x48, v);
    uint8_t *p = self;
    if (self != 0) {
        p += 0x80;
    }
    func_02055ae8(*(void **)(self + 0xcc) + 0x14, p);
    *(Pair *)(self + 0xb8) = data_ov013_021c4e44;
}
