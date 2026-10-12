#include "ffc/types.h"

typedef struct Inner {
    uint32_t pad[3];
    uint32_t f0c;
} Inner;

typedef struct Obj {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint8_t sub[0x18];
    void *f28;
} Obj;

extern Obj *func_ov000_02164ed0(uint32_t timeout);
extern void func_ov000_02165834(void *p);
extern uint32_t func_ov000_0216591c(void);
extern int32_t func_ov000_02168768(void *list);
extern Inner **func_ov000_0216876c(void *list, int32_t idx);
extern void func_ov000_02164fb8(Inner *in);
extern void func_ov001_021732f0(void);
extern void func_ov000_02168738(void *p);
extern void func_ov000_0216583c(void *p);

void func_ov000_0216507c(uint32_t timeout)
{
    Obj *o = func_ov000_02164ed0(timeout);
    int32_t flag = 1;

    if (o->f8 != 0) {
        uint32_t start;
        int32_t i;
        int32_t n;

        func_ov000_02165834(o->sub);
        start = func_ov000_0216591c();
        n = func_ov000_02168768(o->f28);
        if (n > 0) {
            flag = 0;
        }
        i = n - 1;
        while (i >= 0) {
            Inner *in = *func_ov000_0216876c(o->f28, i);
            if (in->f0c != 0) {
                func_ov000_02164fb8(in);
            }
            if (timeout != 0) {
                if (func_ov000_0216591c() - start > timeout) {
                    break;
                }
            }
            i--;
        }
        if (o->fc != 0 && flag != 0) {
            func_ov001_021732f0();
            if (o->f28 != 0) {
                func_ov000_02168738(o->f28);
                o->f28 = 0;
            }
            o->fc = 0;
        }
        func_ov000_0216583c(o->sub);
    }
}
