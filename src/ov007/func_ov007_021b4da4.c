#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021b3fbc(void *obj, void *a, void *b);
extern void *func_ov001_0218dde0(void *self, int flag);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov007_021c6914;

void func_ov007_021b4da4(uint8_t *self)
{
    void *obj = func_0205681c(0xe0);
    if (obj) {
        obj = func_ov007_021b3fbc(obj, self + 0xbc, self + 0xc0);
    }
    void *r = func_ov001_0218dde0(self, 1);
    func_02056bc0(r, obj);
    {
        Pair t = data_ov007_021c6914;
        *(Pair *)(self + 0xb0) = t;
    }
}
