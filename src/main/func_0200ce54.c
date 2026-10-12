#include "ffc/types.h"
typedef struct { uint8_t v; } B;

extern void func_02091a24(void *p);
extern uint32_t func_0208f42c(void);
extern void func_0200a82c(void *a, uint32_t b, uint32_t c, uint16_t *d, uint16_t *e, B f);
extern uint8_t data_020ab148[];

typedef struct { uint32_t flag : 1; uint32_t rest : 31; } Hdr;
typedef struct { uint8_t flag : 1; uint8_t size : 7; } Short;
typedef struct { uint32_t hdr; uint32_t size; uint16_t *ptr; } Long;

void func_0200ce54(void *a, uint32_t b, uint32_t c, void *d, uint32_t x, uint32_t y)
{
    uint16_t *base;
    uint32_t size;
    uint32_t t;
    B f;
    if (!((Hdr *)d)->flag) {
        base = (uint16_t *)((uint8_t *)d + 2);
        size = ((Short *)d)->size;
    } else {
        base = ((Long *)d)->ptr;
        size = ((Long *)d)->size;
    }
    if (x > size) {
        func_02091a24(data_020ab148);
        func_0208f42c();
    }
    base += x;
    t = size - x;
    y = *(t < y ? &t : &y);
    func_0200a82c(a, b, c, base, base + y, f);
}
