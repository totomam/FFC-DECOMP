/* cflags: -lang c++ */
#include "ffc/types.h"

struct Pair { uint32_t a; uint32_t b; };

extern "C" {
void func_0208763c(void *p);
uint64_t func_0209a76c(uint32_t a, uint32_t b);
void func_020091a4(void *p);
uint32_t func_0203b708(uint32_t v);
void func_02056bc0(void *object, uint32_t node);
uint32_t func_020817c8(uint32_t first, uint32_t second);
uint32_t func_02081210(uint32_t object, uint32_t second);
uint32_t func_02062a78(void *obj, Pair p1, Pair p2, int32_t e5, int32_t e6);
void func_02087678(void *p);
extern uint32_t data_0209de28;
extern uint32_t data_020a7c00;
extern uint32_t data_0209de2c;
extern uint32_t data_020aad70[2];
void func_02009494(uint8_t *p);
}

static inline uint32_t sc(uint32_t a, uint32_t b) { return func_02081210(func_020817c8(a << 3, data_020a7c00), b); }
struct Lock {
    uint32_t x[8]; Pair p2; Pair p1;
    void *ptr;
    uint8_t flag;
    Lock(void *q) { flag = 1; ptr = q; if (flag) func_0208763c(ptr); }
    ~Lock() { if (flag) func_02087678(ptr); }
};

void func_02009494(uint8_t *p)
{
    Lock lk(p + 0x98);
    int32_t sh; uint32_t n = 0x2000;

    *(uint32_t *)(p + 0xc0) = *(uint32_t *)(p + 0xc0) + 1;
    *(uint32_t *)(p + 0xc0) = (uint32_t)(func_0209a76c(*(uint32_t *)(p + 0xc0), *(uint32_t *)(p + 0xbc)) >> 32);

    func_020091a4(p);
    func_02056bc0(p + 0x14, func_0203b708(data_0209de28));

    sh = (int32_t)sc(n, n) >> 12;
    lk.p1.a = 0; lk.p1.b = 0xc0;
    lk.p2.a = 0; lk.p2.b = 0xb0;
    func_02062a78(*(void **)(p + 0x88), lk.p1, lk.p2, sh, 0);

    func_02056bc0(p + 0x14, func_0203b708(data_0209de2c));

    *(uint32_t *)(p + 0x80) = data_020aad70[0];
    *(uint32_t *)(p + 0x84) = data_020aad70[1];
}
