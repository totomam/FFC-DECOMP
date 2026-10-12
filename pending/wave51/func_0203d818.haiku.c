#include "ffc/types.h"

extern void *func_020424e0(void *x);
extern void func_ov003_021463f8(void *x, uint32_t a, uint32_t b);
extern void func_02052d3c(void *x, void *y);
extern void func_02052c04(void *x);
extern void *func_02053290(void *object);
extern void func_02056db0(void *object);
extern uint8_t data_020aee70[];

typedef struct {
    uint32_t pad0;
    void *ptr;
    void *val;
    uint8_t flag;
} Sub;

typedef struct {
    void *vt;
    uint8_t pad1[0x88 - 4];
    void *field88;
    uint8_t pad2[0xc0 - 0x8c];
    Sub subc0;
    uint8_t pad3[0xd0 - 0xc0 - sizeof(Sub)];
    Sub subd0;
} Obj;

void *func_0203d818(void *p)
{
    Obj *r4 = (Obj *)p;
    Sub *r5;

    r4->vt = data_020aee70;
    func_ov003_021463f8(func_020424e0(r4->field88), 0, 0);

    r5 = &r4->subd0;
    if (r5->ptr != 0) {
        if (r5->flag != 0) {
            func_02052d3c(r5->ptr, r5->val);
        }
        func_02052c04(r5->ptr);
    }
    func_02053290(r5);

    r5 = &r4->subc0;
    if (r5->ptr != 0) {
        if (r5->flag != 0) {
            func_02052d3c(r5->ptr, r5->val);
        }
        func_02052c04(r5->ptr);
    }
    func_02053290(r5);

    func_02056db0(r4);
    return r4;
}
