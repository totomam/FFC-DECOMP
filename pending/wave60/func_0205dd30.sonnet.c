#include "ffc/types.h"
typedef struct { uint32_t a, b; } P;
extern void func_02062930(void *self, P p);
extern void *func_0205327c(void *d, const void *s);
extern void func_02052be0(void);
extern void func_02052d10(uint32_t a, uint32_t b);
extern void func_0205df08(void *self, uint32_t a, uint32_t b, uint32_t c);
extern uint32_t data_020b0fd8;
extern uint32_t *data_0213df20;
typedef struct { uint32_t p; uint32_t a; uint32_t b; uint8_t f; } E;
void *func_0205dd30(uint32_t *self, uint8_t *src, uint32_t a, uint32_t b, uint32_t c)
{
    P p; p.a = 5; p.b = 5;
    uint8_t *d;
    func_02062930(self, p);
    self[0] = (uint32_t)&data_020b0fd8;
    d = (uint8_t*)self + 0x34;
    func_0205327c(d, src);
    {
        uint32_t y, x = *(uint32_t*)(src+4); y = *(uint32_t*)(src+8);
        *(uint32_t*)(d+4) = x; *(uint32_t*)(d+8) = y;
        uint8_t f = src[0xc]; d[0xc] = f;
        if (x) { func_02052be0(); if (d[0xc]) func_02052d10(*(uint32_t*)(d+4), *(uint32_t*)(d+8)); }
    }
    {
        uint32_t y = *(uint32_t*)(src+0x14), x = *(uint32_t*)(src+0x10);
        *(uint32_t*)(d+0x14) = y; d[0x18] = src[0x18];
        *(uint32_t*)(d+0x10) = x;
        if (x) { func_02052be0(); if (d[0x18]) func_02052d10(*(uint32_t*)(d+0x10), *(uint32_t*)(d+0x14)); }
    }
    {
        uint32_t y = *(uint32_t*)(src+0x20), x = *(uint32_t*)(src+0x1c);
        *(uint32_t*)(d+0x20) = y; 
        uint8_t f = src[0x24];
        *(uint32_t*)(d+0x1c) = x; d[0x24] = f;
        if (x) { func_02052be0(); if (d[0x24]) func_02052d10(*(uint32_t*)(d+0x1c), *(uint32_t*)(d+0x20)); }
    }
    {
        uint32_t y = *(uint32_t*)(src+0x2c), x = *(uint32_t*)(src+0x28);
        *(uint32_t*)(d+0x2c) = y;
        uint8_t f = src[0x30];
        *(uint32_t*)(d+0x28) = x; d[0x30] = f;
        if (x) { func_02052be0(); if (d[0x30]) func_02052d10(*(uint32_t*)(d+0x28), *(uint32_t*)(d+0x2c)); }
    }
    *(uint32_t*)(d+0x34) = *(uint32_t*)(src+0x34);
    self[7] = *data_0213df20;
    func_0205df08(self, a, b, c);
    return self;
}
