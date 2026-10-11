#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021b930c(void *obj, void *a, void *b, void *c);
extern void *func_ov001_0218dde0(void *obj, int flag);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov007_021c782c;

void func_ov007_021baacc(uint8_t *p)
{
    void *n = func_0205681c(0x100);
    if (n) {
        n = func_ov007_021b930c(n, p + 0xc0, p + 0xc8, p + 0xcc);
    }
    void *obj = func_ov001_0218dde0(p, 1);
    func_02056bc0(obj, n);
    *(Pair *)(p + 0xb0) = data_ov007_021c782c;
}
