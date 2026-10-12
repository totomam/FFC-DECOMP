#include "ffc/types.h"

extern void *func_0203b6fc(void);
extern void func_02069288(void *object);
extern int func_020692e8(void *object);
extern void func_020692a4(void *object);
extern void *func_020655dc(void *obj, int a, int b);
extern void func_02056bc0(void *object, void *node);
extern void func_020692f0(void *object);
extern void *func_0203b720(void);
extern void func_ov012_021cfdc0(void *object, int x);

#define PTR(off) (*(void **)((uint8_t *)p + (off)))
#define U8(off) (*(uint8_t *)((uint8_t *)p + (off)))
#define S8(off) (*(int8_t *)((uint8_t *)p + (off)))
#define C4(o) (*(void **)((uint8_t *)(o) + 0xc4))

void func_ov012_021d04c8(void *param)
{
    uint8_t *p = (uint8_t *)param;
    void *r6 = func_0203b6fc();
    void *q;
    int m;

    if (U8(0x33c)) {
        func_02069288(PTR(0x258));
        if (func_020692e8(PTR(0x258))) {
            q = C4(PTR(0x258));
            m = 3;
        } else {
            q = C4(PTR(0x258));
            m = 2;
        }
    } else {
        func_020692a4(PTR(0x258));
        q = C4(PTR(0x258));
        m = 1;
    }
    func_02056bc0(r6, func_020655dc(q, m, 2));

    if (U8(0x33c) || S8(0x338) > 0) {
        func_02069288(PTR(0x25c));
        if (func_020692e8(PTR(0x25c))) {
            q = C4(PTR(0x25c));
            m = 3;
        } else {
            q = C4(PTR(0x25c));
            m = 2;
        }
    } else {
        func_020692a4(PTR(0x25c));
        q = C4(PTR(0x25c));
        m = 1;
    }
    func_02056bc0(r6, func_020655dc(q, m, 2));

    if (U8(0x33b)) {
        if (func_020692e8(PTR(0x254))) {
            if (U8(0x33c) || S8(0x338) > 0) {
                q = C4(PTR(0x254));
                m = 6;
tail:
                func_02056bc0(r6, func_020655dc(q, m, 2));
            } else {
                q = C4(PTR(0x254));
                m = 5;
                goto tail;
            }
        } else if (U8(0x33c) || S8(0x338) > 0) {
            q = C4(PTR(0x254));
            m = 4;
            goto tail;
        } else {
            func_020692f0(PTR(0x254));
        }
    }
    void *t = func_0203b720();
    void *lst = (uint8_t *)p + 0x14;
    func_02056bc0(lst, t);
    func_02056bc0(lst, r6);
    func_ov012_021cfdc0(p, 1);
}
