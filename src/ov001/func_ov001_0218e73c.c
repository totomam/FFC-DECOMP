#include "ffc/types.h"

extern void *data_020b8e44;
extern void *data_020b93b8;
extern void *func_02084b2c(void *s, int c, uint32_t n);
extern void func_02072234(uint32_t a, void *b);
extern int func_02071fa4(void);
extern void func_02075b84(uint32_t a, void *b, void *c, uint32_t d, uint32_t e);
extern void func_02005988(void *a, void *b);
extern void func_020095b8(void *a, void *b);
extern void func_020511e8(void *a, void *b);
extern void *func_020059cc(void *object);
extern void func_0201f7fc(void *a, void *b, void *c);
extern void func_02093bc8(void *a, void *b);
extern void func_0201f7a8(void *a, void *b, void *c);
extern void *func_0200a678(void *object);

typedef struct {
    uint32_t flag : 1;
    uint32_t rest : 31;
    uint32_t big_len;
    void *big_ptr;
} Str;

typedef struct {
    uint8_t f0 : 1;
    uint8_t len : 7;
} Byte0;

void func_ov001_0218e73c(void *p0)
{
    uint8_t buf[0x101];
    uint8_t s5c[12];
    Str s50;
    uint8_t s20[0x30];
    uint8_t s10[16];
    uint8_t s4[12];
    uint32_t v;
    void *r1;

    func_02072234(*(uint32_t *)((char *)*(void **)data_020b8e44 + 0x84), p0);
    if (func_02071fa4() == 0) {
        return;
    }
    func_02084b2c(buf, 0, 0x101);
    func_02075b84(*(uint32_t *)((char *)*(void **)data_020b8e44 + 0x88), p0, buf, 0, 0);
    func_02005988(s5c, buf + 10);
    func_020095b8(s4, s5c);
    func_020511e8(&s50, s4);
    func_020059cc(s4);

    if (s50.flag == 0) {
        v = ((Byte0 *)&s50)->len;
    } else {
        v = s50.big_len;
    }
    if (v != 0) {
        func_0201f7fc(data_020b93b8, p0, s10);
        if (s50.flag == 0) {
            r1 = (uint8_t *)&s50 + 2;
        } else {
            r1 = s50.big_ptr;
        }
        func_02093bc8(s20, r1);
        func_0201f7a8(data_020b93b8, p0, s10);
    }
    func_0200a678(&s50);
    func_020059cc(s5c);
}
