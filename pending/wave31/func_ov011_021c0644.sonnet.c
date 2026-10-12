#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} S8;

typedef struct Obj Obj;
struct Obj {
    void (**vtbl)(Obj *);
};

extern void func_ov009_021ada08(void *p);
extern void func_ov011_021c0708(void *p);
extern void func_ov011_021c2d4c(void *p);
extern void func_ov011_021bff9c(void *p);
extern void func_ov011_021c3100(void *p);
extern void func_02069724(S8 *out, void *p);
extern void func_02069828(void *p, S8 s);
extern void func_02069600(void *p);

void func_ov011_021c0644(void *p)
{
    S8 s;
    Obj *obj;

    func_ov009_021ada08(p);
    func_ov011_021c0708(p);
    func_ov011_021c2d4c(p);
    func_ov011_021bff9c(p);
    func_ov011_021c3100(p);
    func_02069724(&s, p);
    func_02069828(p, s);

    {
    uint32_t *f = (uint32_t *)((uint8_t *)p + 0x29c);
    uint32_t v = *f;
    if (v != 0) {
        func_02069600(p);
        obj = (Obj *)*f;
        if (obj != 0) {
            if (obj != 0) obj->vtbl[1](obj);
            *(uint32_t *)((uint8_t *)p + 0x29c) = 0;
        }
    }
    }
}
