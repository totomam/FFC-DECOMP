#include "ffc/types.h"

typedef struct Mgr {
    uint8_t pad0[0x14];
    int32_t count;
    uint8_t *ents;
    uint8_t pad1;
    uint8_t flag;
} Mgr;

typedef struct Top {
    uint8_t pad[0xc];
    Mgr *m;
} Top;

typedef struct P {
    int32_t a;
    int32_t b;
} P;

extern Top data_ov000_0217004c;
extern int func_ov000_02154ed0(uint8_t *e);
extern int func_ov000_0215a638(void);
extern void func_ov000_02155498(int h, uint8_t *e, uint8_t *tmp);
extern int func_02092948(uint8_t *tmp, uint8_t *q);
extern int func_ov000_021553c4(uint8_t *e);
extern int func_ov000_02154e78(uint8_t *e);
extern void func_ov000_02155478(uint8_t *e, int v);
extern void func_ov000_02154f04(uint8_t *e);
extern int func_ov000_02159dd8(uint8_t *ents, int count, int v);
extern void func_ov000_02154f24(uint8_t *e, int v);
extern int func_ov000_02154e58(uint8_t *e);
extern void func_ov000_02154f48(uint8_t *e, int v);
extern void func_ov000_02159a9c(int idx);

void func_ov000_0215a2b4(int unused, P *param) {
    volatile int found = 0;
    int done = 0;
    P *p = param;
    int i;
    uint8_t *q;
    uint8_t tmp[0x18];
    if (p->a != 0) return;
    if (data_ov000_0217004c.m->count > 0) {
        i = found;
        do {
            uint8_t *e = data_ov000_0217004c.m->ents + i * 12;
            q = (uint8_t *)p + 0x8e;
            if (func_ov000_02154ed0(e) == 1) {
                int h = func_ov000_0215a638();
                func_ov000_02155498(h, e, tmp);
                if (func_02092948(tmp, q) != 0) goto next;
            } else {
                if (func_ov000_02154ed0(e) == 3 || func_ov000_02154ed0(e) == 2) {
                    func_ov000_0215a638();
                    if (func_ov000_021553c4(e) != p->b) goto next;
                    if (func_ov000_02154e78(e) == 1) {
                        done = 1;
                        goto next;
                    }
                } else {
                    goto next;
                }
            }
            func_ov000_02155478(e, p->b);
            func_ov000_02154f04(e);
            found = 1;
        next:
            i++;
        } while (i < data_ov000_0217004c.m->count);
    }
    if (found != 0) {
        int idx = func_ov000_02159dd8(data_ov000_0217004c.m->ents, data_ov000_0217004c.m->count, p->b);
        if (done == 0) {
            uint8_t *r = data_ov000_0217004c.m->ents + idx * 12;
            func_ov000_02154f24(r, 1);
            if (func_ov000_02154e58(r) != 0) func_ov000_02154f48(r, 1);
            func_ov000_02159a9c(idx);
        }
        data_ov000_0217004c.m->flag = 1;
    }
}
