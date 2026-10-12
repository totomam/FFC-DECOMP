#include "ffc/types.h"

typedef struct {
    void *h;
    uint8_t pad[0xc8];
    int cc;
} Obj;

extern int func_ov000_02165704(void *h);
extern int func_ov000_021654f8(void *h, uint8_t *buf, int mask, int zero, int *a, int *b);
extern void func_ov000_021652a8(int a, int b, int c, uint8_t *d, int e);
extern void func_ov000_02165350(int a, int b, int c, uint8_t *d, int e);
extern void func_ov001_02184db4(Obj *p, uint8_t *buf, int idx, int *x);
extern int func_ov000_021655a0(void *h);

extern uint8_t data_ov001_02195650[];
extern uint8_t data_ov001_02193588[];
extern uint8_t data_ov001_021935ac[];
extern uint8_t data_ov001_021935f8[];

void func_ov001_02183e98(Obj *p)
{
    int v[3];
    int idx;

    v[0] = 8;
    if (p->cc == 0) {
        return;
    }
    if (func_ov000_02165704(p->h) == 0) {
        return;
    }
    do {
        idx = func_ov000_021654f8(p->h, data_ov001_02195650, 0xff, 0, &v[1], &v[0]);
        if (idx != -1) {
            data_ov001_02195650[idx] = 0;
            func_ov000_021652a8(3, 0, 0x10, data_ov001_02193588, idx);
            func_ov000_02165350(3, 0, 0x20, data_ov001_02195650, idx);
            func_ov001_02184db4(p, data_ov001_02195650, idx, &v[1]);
        } else {
            if (idx == 0) {
                func_ov000_021652a8(3, 0, 0x10, data_ov001_021935ac, idx);
            } else {
                func_ov000_021652a8(3, 0, 0x10, data_ov001_021935f8,
                                    func_ov000_021655a0(p->h));
            }
        }
    } while (func_ov000_02165704(p->h) != 0);
}
