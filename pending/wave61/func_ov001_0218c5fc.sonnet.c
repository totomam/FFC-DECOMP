#include "ffc/types.h"
typedef struct { uint32_t a, b; } Pair;
extern void func_02037544(void *p);
extern void *func_0205681c(int n);
extern void *func_ov007_021bce1c(void *o, void *p, uint32_t x, void *q, int z);
extern void *func_ov001_0218dde0(void *p, int n);
extern void func_02056bc0(void *object, void *node);
extern uint8_t *data_020b8e44;
extern Pair data_ov001_02194884;
void func_ov001_0218c5fc(uint8_t *p) {
    void *o;
    func_02037544(p);
    *(uint32_t *)(p + 0x6fc) = 0;
    o = func_0205681c(0x1dc);
    if (o != 0) {
        o = func_ov007_021bce1c(o, p, *(uint32_t *)(data_020b8e44 + 8), p + 0x6d4, 0);
    }
    func_02056bc0(func_ov001_0218dde0(p, 0), o);
    *(Pair *)(p + 0xb0) = data_ov001_02194884;
}
