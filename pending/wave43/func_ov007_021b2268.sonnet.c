#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern int func_02075aac(void *x);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *v, uint32_t x);
extern void func_02005988(Pair *obj, void *p);
extern void *func_02032d24(void *obj, Pair s, Pair *c, uint32_t d, uint32_t e);
extern void *func_ov001_0218dde0(void *p, int n);
extern void func_02056bc0(void *object, void *node);
extern void *func_020059cc(void *object);
extern void *data_020b8e44;
extern Pair data_ov007_021c5fe4;
extern Pair data_ov007_021c5fec;

void func_ov007_021b2268(uint8_t *p)
{
    uint32_t obj[3];
    Pair s;
    int r4;
    void *r7;
    void *r;

    if (*(int *)(p + 0xd4) == 0 || func_02075aac(*(void **)(*(uint8_t **)data_020b8e44 + 0x88)) == 0) {
        if (*(int *)(p + 0xd4) == 1) {
            r4 = 0;
            r7 = func_0205681c(0xb0);
            if (r7 != 0) {
                r = func_020159c8(data_020b8e44, 0xb0 + 0x58);
                func_02005988((Pair *)obj, r);
                s.a = 0x80;
                s.b = 0x60;
                r4 = 1;
                r7 = func_02032d24(r7, s, (Pair *)obj, 4, 0);
            }
            func_02056bc0(func_ov001_0218dde0(p, 2), r7);
            if (r4 != 0) {
                func_020059cc(obj);
            }
        }
        *(Pair *)(p + 0xb0) = data_ov007_021c5fe4;
        return;
    }
    *(Pair *)(p + 0xb0) = data_ov007_021c5fec;
}
