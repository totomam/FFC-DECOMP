/* cflags: -lang c++ */
#include "ffc/types.h"
typedef struct { uint32_t a; uint32_t b; } Pair;
extern "C" {
extern Pair data_ov007_021c5308;
extern void *data_020b8e44;
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *obj, uint32_t size);
extern void func_02005988(void *dst, void *src);
extern void *func_02033338(void *obj, void *buf, void *field, uint32_t zero);
extern void *func_020059cc(void *object);
extern void func_02033440(void *obj, Pair v);
extern void func_02033438(void *obj, uint32_t c);
extern void *func_ov007_021ac8e8(void *p, Pair v);
extern void func_02056bc0(void *object, void *node);
void func_ov007_021ac928(uint8_t *p);
}
struct Buf {
    uint32_t v[3];
    Buf(void *s) { func_02005988(this, s); }
    ~Buf() { func_020059cc(this); }
};
static inline void *mk(void *m, uint8_t *p, uint32_t z)
{
    return func_02033338(m, &Buf(func_020159c8(data_020b8e44, 0x44)), p + 0xf8, z);
}
void func_ov007_021ac928(uint8_t *p)
{
    if (*(uint32_t *)(p + 0xf8) != 1) return;
    uint32_t zero = 0;
    *(uint32_t *)(p + 0xf8) = zero;
    void *obj;
    obj = (obj = func_0205681c(0xb8)) ? func_02033338(obj, &Buf(func_020159c8(data_020b8e44, 0x44)), p + 0xf8, zero) : obj;
    Pair args; args.a = 0x80; args.b = 0x70;
    func_02033440(obj, args);
    func_02033438(obj, 1);
    void *res;
    res = func_ov007_021ac8e8(p, data_ov007_021c5308);
    uint8_t *n = p + 0x14;
    func_02056bc0(n, obj);
    func_02056bc0(n, res);
}
