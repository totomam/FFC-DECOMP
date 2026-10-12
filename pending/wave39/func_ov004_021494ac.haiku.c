#include "ffc/types.h"

extern void func_020095b8(void *object);
extern void *func_0205323c(void *object, void *arg);
extern void func_020059cc(void *object);
extern void func_0201506c(void *object, void *const *source, uint32_t value);
extern void func_02052d3c(void *a, void *b);
extern void func_02052c04(void *a);
extern void func_02052be0(void);
extern void func_02052d10(void *a, void *b);
extern void func_02052c94(void *a, void *b);
extern void *func_02052d90(const void *mar, uint32_t index);

typedef struct {
    uint32_t hdr;
    void *ptr;
    void *val;
    uint8_t flag;
} Slot;

typedef struct {
    void *a;
    void *b;
    uint8_t c;
} Tmp;

void *func_ov004_021494ac(Slot *p) {
    Tmp u;
    Tmp t;

    func_020095b8(&u);
    func_0205323c(p, &u);
    func_020059cc(&u);

    p->ptr = 0;
    p->flag = 0;
    func_0201506c(&t, (void *const *)p, 0);

    if ((void *)&t != (void *)&p->ptr) {
        if (p->ptr != 0) {
            if (p->flag) {
                func_02052d3c(p->ptr, p->val);
            }
            func_02052c04(p->ptr);
        }
        p->ptr = t.a;
        p->val = t.b;
        p->flag = t.c;
        if (p->ptr != 0) {
            func_02052be0();
            if (p->flag) {
                func_02052d10(p->ptr, p->val);
            }
        }
    }

    if (t.a != 0) {
        if (t.c) {
            func_02052d3c(t.a, t.b);
        }
        func_02052c04(t.a);
    }

    if (p->ptr != 0 && !p->flag) {
        p->flag = 1;
        func_02052c94(p->ptr, p->val);
    }

    func_02052d90(p->ptr, p->val);
    return p;
}
