#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_0205f574(void *obj, uint32_t a, uint32_t b, uint32_t c);
extern void *func_02069210(void *object);
extern void *func_0203b95c(void *a, void *b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern void func_020692a4(void *object);
extern void func_02069320(void *object, uint32_t value);
extern void func_02069404(void *object, uint32_t value);
extern void func_020695ec(void *a, void *b);
extern void func_02069288(void *object);
extern void func_ov013_021c0aec(void *object);
extern void *data_ov013_021c4ab8[];
extern void *data_ov013_021c4898[];
typedef struct { uint32_t a; uint32_t b; } Pair;
extern Pair data_ov013_021c48c4;
extern void *data_ov013_021c4aec[];
extern Pair data_ov013_021c48d4;

void func_ov013_021c0b48(void *p)
{
    uint8_t *obj = (uint8_t *)p;
    uint8_t *r4;
    void *q;
    void **vt;

    q = func_0205681c(0x50);
    if (q != 0) {
        q = func_0205f574(q, 0x14, 0, 1);
    }
    *(void **)(obj + 0xc8) = q;
    **(uint8_t **)(obj + 0xb8) = 0;
    **(uint8_t **)(obj + 0xbc) = 0;
    *(uint8_t *)(obj + 0xcc) = 1;

    r4 = (uint8_t *)func_0205681c(0x98);
    if (r4 != 0) {
        void *r6 = *(void **)(obj + 0xc8);
        func_02069210(r4);
        *(void **)r4 = data_ov013_021c4ab8;
        *(void **)(r4 + 0x94) = func_0203b95c(data_ov013_021c4898[3], r6, 0, 1);
        vt = *(void ***)(*(void **)(r4 + 0x94));
        ((void (*)(void *, uint32_t, uint32_t))vt[14])(*(void **)(r4 + 0x94), 1, 0);
        vt = *(void ***)(*(void **)(r4 + 0x94));
        ((void (*)(void *))vt[10])(*(void **)(r4 + 0x94));
        {
            Pair *d = &data_ov013_021c48c4;
            void *o = *(void **)(r4 + 0x94);
            vt = *(void ***)o;
            ((void (*)(void *, Pair))vt[3])(o, *d);
        }
        func_02056bc0(r4 + 0x48, *(void **)(r4 + 0x94));
        func_020692a4(r4);
    }
    *(void **)(obj + 0xc0) = r4;

    r4 = (uint8_t *)func_0205681c(0x98);
    if (r4 != 0) {
        void *r6 = *(void **)(obj + 0xc8);
        func_02069210(r4);
        *(void **)r4 = data_ov013_021c4aec;
        *(void **)(r4 + 0x94) = func_0203b95c(data_ov013_021c4898[4], r6, 0, 1);
        vt = *(void ***)(*(void **)(r4 + 0x94));
        ((void (*)(void *, uint32_t, uint32_t))vt[14])(*(void **)(r4 + 0x94), 2, 0);
        vt = *(void ***)(*(void **)(r4 + 0x94));
        ((void (*)(void *))vt[10])(*(void **)(r4 + 0x94));
        {
            Pair *d = &data_ov013_021c48d4;
            void *o = *(void **)(r4 + 0x94);
            vt = *(void ***)o;
            ((void (*)(void *, Pair))vt[3])(o, *d);
        }
        func_02056bc0(r4 + 0x48, *(void **)(r4 + 0x94));
        func_02069320(r4, 2);
        func_02069404(r4, 4);
    }
    *(void **)(obj + 0xc4) = r4;

    func_020695ec(obj, *(void **)(obj + 0xc0));
    func_020695ec(obj, *(void **)(obj + 0xc4));
    if (obj[0xcd] != 0) {
        func_02069288(*(void **)(obj + 0xc0));
    }
    func_ov013_021c0aec(obj);
    func_02056bc0(obj + 0x48, *(void **)(obj + 0xc8));
}
