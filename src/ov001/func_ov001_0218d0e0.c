#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} S;

extern void func_02037544(void *p);
extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021bd828(void *node, void *obj, uint32_t x, uint8_t c, uint32_t y);
extern void *func_ov001_0218dde0(void *p, int z);
extern void func_02056bc0(void *object, void *node);
extern uint32_t *data_020b8e44;
extern S data_ov001_021948cc;

void func_ov001_0218d0e0(uint8_t *p) {
    void *r4;
    int r3;
    uint32_t off;
    S t;

    off = 0x66c;
    func_02037544(p);
    if (*(int *)(p + off) != 2) {
        r4 = func_0205681c(0x1dc);
        if (r4 != 0) {
            r3 = 0xc8;
            if (*(int *)(p + off) != 1) {
                r3 = 0x64;
            }
            r4 = func_ov007_021bd828(r4, p, data_020b8e44[2], (uint8_t)r3, 0);
        }
        func_02056bc0(func_ov001_0218dde0(p, 0), r4);
    }
    data_020b8e44[2] = 0;
    t = data_ov001_021948cc;
    *(S *)(p + 0xb0) = t;
}
