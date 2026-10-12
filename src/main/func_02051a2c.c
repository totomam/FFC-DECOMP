#include "ffc/types.h"

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
} S;

typedef struct {
    void *p;
    uint8_t f;
} H;

extern S data_0213df68;
extern uint8_t data_0213dfac[];
extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern void func_0209d06c(uint32_t a, uint32_t b, uint32_t c, void *d);
extern uint32_t func_0209cec8(uint32_t a, uint32_t b, uint32_t c, void *d, void *e);
extern void func_02051acc(void);
extern void func_02051a9c(void);

void func_02051a2c(uint32_t a, uint32_t b)
{
    volatile H h;
    if (a == data_0213df68.f8 && b == data_0213df68.f0) {
        return;
    }
    h.p = data_0213dfac;
    h.f = 1;
    if (h.f) {
        func_0208763c(data_0213dfac);
    }
    func_0209d06c(data_0213df68.f4, 0x20, 8, func_02051acc);
    data_0213df68.f8 = a;
    data_0213df68.f0 = b;
    data_0213df68.f4 = func_0209cec8(a, 0x20, 8, func_02051a9c, func_02051acc);
    if (h.f) {
        func_02087678(h.p);
    }
}
