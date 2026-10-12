/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {

extern void func_020696e0(void *object, uint32_t value);
extern void func_02069700(void *object, uint32_t a, uint32_t b);
extern void *func_0203bb94(void *a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern void *func_0203b81c(uint32_t id);
extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021ae310(void *a, void *b);
extern void func_020695ec(void *object, void *node);
extern void func_02005988(void *a, uint32_t b);
typedef struct { uint32_t a, b; } W;
extern void func_ov007_021bb5bc(void *a, void *b, void *c, W w);
extern void *func_020059cc(void *object);
extern void func_02069320(void *object, uint32_t value);
extern void func_ov007_021bb9d4(void *o);
extern void func_ov007_021bba68(void *o);
extern void func_ov007_021bbb3c(void *o);
extern uint32_t func_0203b6f0(void);
extern void *func_021959c0(void *a, void *b, uint32_t c);
extern void func_020697ac(void *o, void *n);
extern void func_ov007_021bbab8(void *o);
extern void func_ov007_021bbd60(void *o);

extern char data_ov007_021c7aa0[];
extern char data_ov007_021c7ab8[];
extern uint32_t data_ov007_021c7888[];
extern char data_ov007_021c7a0c[];
extern char data_ov007_021c7a40[];


struct K { int v; K(int x):v(x){} ~K(){} };
static inline void pre(uint8_t *s, K one, K zero)
{
    func_020696e0(s, one.v);
    func_02069700(s, one.v, zero.v);
    void *obj;
    if (*(int *)(s + 0xbc) == 0) obj = data_ov007_021c7aa0; else obj = data_ov007_021c7ab8;
    *(void **)(s + 0xcc) = func_0203bb94(obj, one.v, zero.v, zero.v);
}
static inline void *cur(uint8_t *s) { return *(void **)(s + 0xcc); }
void func_ov007_021bb3d0(uint8_t *s)
{
    void *r4;
    void *p;
    void *obj;
    void *tmp;
    void **vt;
    uint32_t loc1[2];
    uint32_t loc2[2];

    pre(s, K(1), K(0));
    obj = cur(s);
    vt = *(void ***)obj;
    ((void (*)(void *, uint32_t))vt[8])(obj, 2);
    obj = cur(s);
    vt = *(void ***)obj;
    ((void (*)(void *))vt[10])(obj);
    func_02056bc0(s + 0x48, *(void **)(s + 0xcc));
    *(void **)(s + 0xc8) = func_0203b81c(0x3d);
    p = func_0205681c(0x98);
    if (p != 0) {
        p = func_ov007_021ae310(p, *(void **)(s + 0xc8));
    }
    *(void **)(s + 0xd0) = p;
    func_020695ec(s, p);

    if (*(int *)(s + 0xbc) != 2) {
        r4 = func_0205681c(0x9c);
        if (r4 != 0) {
            func_02005988(loc1, data_ov007_021c7888[3]);
            func_ov007_021bb5bc(r4, s, loc1, *(W *)&data_ov007_021c7888[0x14]);
            func_020059cc(loc1);
            *(void **)r4 = data_ov007_021c7a0c;
        }
        *(void **)(s + 0xd8) = r4;
        func_020695ec(s, r4);
    }

    if (*(int *)(s + 0xbc) == 1) {
        r4 = func_0205681c(0x9c);
        if (r4 != 0) {
            func_02005988(loc2, data_ov007_021c7888[2]);
            func_ov007_021bb5bc(r4, s, loc2, *(W *)&data_ov007_021c7888[0x12]);
            func_020059cc(loc2);
            *(void **)r4 = data_ov007_021c7a40;
            func_02069320(r4, 8);
        }
        *(void **)(s + 0xd4) = r4;
        func_020695ec(s, r4);
        {
            uint8_t *c0 = *(uint8_t **)(s + 0xc0);
            if (c0 != 0) {
                *c0 = 0;
            }
        }
    }

    func_ov007_021bb9d4(s);
    if (*(int *)(s + 0xbc) != 0) {
        func_ov007_021bba68(s);
    }
    func_ov007_021bbb3c(s);
    *(uint32_t *)(s + 0x140) = func_0203b6f0();
    tmp = func_0205681c(0x48);
    if (tmp != 0) {
        tmp = func_021959c0(tmp, *(void **)(s + 0xc8), 0);
    }
    *(void **)(s + 0x144) = tmp;
    obj = tmp;
    vt = *(void ***)obj;
    ((void (*)(void *, uint32_t))vt[8])(obj, 0);
    obj = *(void **)(s + 0x144);
    vt = *(void ***)obj;
    ((void (*)(void *))vt[11])(obj);
    func_02056bc0(s + 0x48, *(void **)(s + 0x144));
    func_02056bc0(s + 0x48, *(void **)(s + 0x140));
    func_02056bc0(s + 0x48, *(void **)(s + 0xc8));
    func_020697ac(s, *(void **)(s + 0xd0));
    func_ov007_021bbab8(s);
    func_ov007_021bbd60(s);
}

}
