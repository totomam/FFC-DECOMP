/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" {
extern void func_02021338(uint32_t code);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *src, uint32_t id);
extern void func_02005988(void *dst, void *src);
extern void *func_02033338(void *obj, void *a, void *b, uint32_t c);
extern void *func_020059cc(void *obj);
extern void func_02033420(void *obj, void *a, void *b);
extern void func_02033438(void *obj, uint32_t v);
struct S2 { uint32_t a, b; };
extern uint32_t func_ov008_0219d07c(void *self, S2 s);
extern S2 data_ov008_021a7f78;
extern void *func_02062a30(void *owner);
extern void func_02056bc0(void *object, void *node);
extern void *data_020b8e44;
uint32_t func_ov008_0219cf90(uint8_t *p);
}

struct Str {
    uint32_t a, b, c;
    Str(void *src) { func_02005988(this, src); }
    ~Str() { func_020059cc(this); }
};

static inline void *mk(void *o, const Str &s, void *q) { return func_02033338(o, (void *)&s, q, 0); }

static inline void mk2(void *o, const Str &a, const Str &b) { func_02033420(o, (void *)&a, (void *)&b); }

uint32_t func_ov008_0219cf90(uint8_t *p)
{
    if (p[0x104] == 0) {
        func_02021338(0xc7);
        return 0;
    }
    {
        void *obj = *(void **)(p + 0x134);
        (*(void (**)(void *))(*(uint8_t **)obj + 0x2c))(obj);
    }
    *(uint32_t *)(p + 0x154) = 0;
    void *r7;
    r7 = (r7 = func_0205681c(0xb8)) ? mk(r7, Str(func_020159c8(data_020b8e44, 0xe0)), p + 0x154) : r7;
    mk2(r7, Str(func_020159c8(data_020b8e44, 0xe1)), Str(func_020159c8(data_020b8e44, 0xe2)));
    func_02033438(r7, 1);
    uint32_t a = func_ov008_0219d07c(p, data_ov008_021a7f78);
    uint32_t b = (uint32_t)func_02062a30(*(void **)(p + 0x134));
    uint8_t *q = p + 0x14;
    func_02056bc0(q, r7);
    func_02056bc0(q, (void *)b);
    func_02056bc0(q, (void *)a);
    return 1;
}
