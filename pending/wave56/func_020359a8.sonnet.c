#include "ffc/types.h"

typedef struct {
    uint32_t a;
    void *mar;
    uint32_t idx;
    uint8_t flag;
} Obj;

typedef struct {
    uint8_t *flags;
    Obj obj;
} Frame;

extern uint32_t data_020b8e44;
extern void *data_02139508[];

void func_02019c78(void *object, uint32_t v);
void *func_02052d90(const void *mar, uint32_t index);
void func_02035870(void *t);
void func_02056844(void *t);
void *func_0205681c(uint32_t size);
void *func_020356fc(void *r, uint32_t i);
void func_02052d3c(void *mar, uint32_t idx);
void func_02052c04(void *mar);
void *func_02053290(void *object);

void func_020359a8(void *a0, uint8_t *flags)
{
    Frame f;
    uint32_t i;
    void *t;
    uint8_t *b;
    uint32_t *tbl;
    uint8_t *e;
    Obj *o;

    f.flags = flags;
    func_02019c78(&f.obj, data_020b8e44);
    for (i = 0; i < 0x15; i++) {
        b = (uint8_t *)func_02052d90(f.obj.mar, f.obj.idx);
        tbl = (uint32_t *)(b + *(uint32_t *)(b + 0xc));
        e = b + tbl[i];
        e = e + *(uint32_t *)(e + 4);
        if (f.flags[(uint32_t)e] == 0) {
            t = data_02139508[i];
            if (t != 0) {
                if (t != 0) {
                    if (t != 0) {
                        func_02035870(t);
                        func_02056844(t);
                    }
                    data_02139508[i] = 0;
                }
            }
        } else {
            if (data_02139508[i] == 0) {
                t = func_0205681c(0x10);
                if (t != 0) {
                    t = func_020356fc(t, i);
                }
                data_02139508[i] = t;
            }
        }
    }
    o = &f.obj;
    if (f.obj.mar != 0) {
        if (o->flag) {
            func_02052d3c(o->mar, o->idx);
        }
        func_02052c04(o->mar);
    }
    func_02053290(o);
}
