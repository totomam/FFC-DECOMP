#include "ffc/types.h"

typedef struct Ops {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    int (*f14)(void *);
    int (*f18)(void *);
    uint32_t f1c;
    void (*f20)(void *);
} Ops;

typedef struct Ctx {
    uint32_t *vt;
    uint32_t pad[5];
    void *obj;
    uint32_t pad2;
    Ops *ops;
} Ctx;

extern void *func_ov000_02167164(void *data, int n);
extern void func_ov000_02167b80(void *obj, void *s, uint32_t v);
extern void func_ov000_02167d20(void *obj, void *s, void *d, uint32_t v);
extern void func_ov000_02167c24(void *obj, void *s, void *d, void *p);
extern void func_ov000_021673d0(void *obj);
extern void func_ov000_02167bcc(void *obj, void *s, uint32_t v);
extern void func_ov000_02167414(void *obj);
extern uint8_t data_ov007_021c8c74[];
extern uint8_t data_ov007_021c8dc0[];
extern uint8_t data_ov007_021c8dc4[];
extern uint8_t data_ov007_021c8dcc[];
extern uint8_t data_ov007_021c8dd8[];

int func_ov007_021c062c(Ctx *a)
{
    Ops *ops = a->ops;
    int r = ops->f14(a);
    if (r != 0) {
        return r;
    }
    a->obj = func_ov000_02167164(data_ov007_021c8c74, 1);
    if (a->obj == 0) {
        return 2;
    }
    func_ov000_02167b80(a->obj, data_ov007_021c8dc0, a->ops->f4);
    func_ov000_02167d20(a->obj, data_ov007_021c8dc0, data_ov007_021c8dc4, a->vt[5]);
    func_ov000_02167c24(a->obj, data_ov007_021c8dc0, data_ov007_021c8dcc, (uint8_t *)a->vt + 0x18);
    func_ov000_02167c24(a->obj, data_ov007_021c8dc0, data_ov007_021c8dd8, (uint8_t *)a->vt + 0x2c);
    r = ops->f18(a);
    if (r != 0) {
        func_ov000_021673d0(a->obj);
        a->obj = 0;
        if (ops->f20 != 0) {
            ops->f20(a);
        }
        return r;
    }
    func_ov000_02167bcc(a->obj, data_ov007_021c8dc0, a->ops->f4);
    func_ov000_02167414(a->obj);
    return 0;
}
