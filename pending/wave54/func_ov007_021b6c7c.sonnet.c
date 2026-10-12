#include "ffc/types.h"

typedef struct { uint32_t x, y; } Pair;
typedef struct { uint32_t buf[3]; } Loc;

extern void *func_ov001_0218dde0(void *obj, uint32_t x);
extern void func_02056c4c(void);
extern int func_ov007_021ae6cc(void *p);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *a, uint32_t b);
extern void func_02005988(void *a, void *b);
extern void *func_02032d24(void *a, Pair sz, void *d, uint32_t e, uint32_t f);
extern void func_02056bc0(void *object, void *node);
extern void *func_020059cc(void *object);
extern void *func_ov007_021aec28(void *a, void *b, uint32_t c, void *d, void *e);
extern Pair data_ov007_021c6d88;
extern void *data_020b8e44;
extern Pair data_ov007_021c6d90;
extern Pair data_ov007_021c6d98;

void func_ov007_021b6c7c(uint8_t *self)
{
    Loc loc;
    Pair sz;
    void *node;
    void *obj;
    int i;
    int k;
    int used;

    func_ov001_0218dde0(self, 3);
    func_02056c4c();

    k = 0x305;
    if (self[k]) {
        *(Pair *)(self + 0xb0) = data_ov007_021c6d88;
        return;
    }

    if (*(void **)(self + 0xc8) == 0 || func_ov007_021ae6cc(self + 0xc8) == 0) {
        used = 0;
        node = func_0205681c(0xb0);
        if (node != 0) {
            void *x = func_020159c8(data_020b8e44, 0xb0 + 0xa3);
            func_02005988(loc.buf, x);
            sz.x = 0x80;
            sz.y = 0x60;
            used = 1;
            node = func_02032d24(node, sz, loc.buf, 4, 0);
        }

        func_02056bc0(func_ov001_0218dde0(self, 2), node);

        if (used) {
            func_020059cc(loc.buf);
        }

        *(Pair *)(self + 0xb0) = data_ov007_021c6d90;
    } else {
        *(void **)(self + k + 7) = self + 0xd8;
        *(void **)(self + k + 0xb) = self + 0xf4;
        for (i = 0; i < 5; i++) {
            *(uint8_t **)(self + k + 0xf + 4 * i) = self + 0x160 + 0x22 * i;
        }
        obj = func_0205681c(0x84);
        if (obj != 0) {
            obj = func_ov007_021aec28(obj, self + 0x30c, 7, self + 0x328, self + 0x330);
        }
        func_02056bc0(func_ov001_0218dde0(self, 0), obj);
        *(Pair *)(self + 0xb0) = data_ov007_021c6d98;
    }
}
