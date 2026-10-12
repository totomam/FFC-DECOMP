#include "ffc/types.h"

typedef struct {
    void *ptr;
    volatile uint8_t flag;
} Guard;

typedef struct {
    uint32_t big0 : 1;
    uint32_t rest : 31;
} Hdr;

extern void func_0208763c(void);
extern uint32_t func_02030f9c(uint32_t first, uint32_t second, uint32_t third);
extern void func_020095b8(uint32_t a, uint32_t b);
extern void func_02087678(void *p);
extern uint32_t func_02008f2c(void *object, void *value, uint32_t x, uint32_t y);
extern void func_02033014(uint32_t a, void *b, uint32_t c);
extern void *func_020059cc(void *object);
extern uint8_t data_0213dfac[];
extern uint8_t data_020b04f0[];
extern uint8_t data_0213df88[];

void func_02051b0c(uint32_t a, uint8_t *b) {
    Guard g;
    uint32_t buf[3];
    int8_t *s;

    g.ptr = data_0213dfac;
    g.flag = 1;
    if (g.flag != 0) {
        func_0208763c();
    }
    if (func_02030f9c((uint32_t)b, (uint32_t)data_020b04f0, 0) != 0xffffffffu) {
        func_020095b8(a, (uint32_t)b);
        if (g.flag != 0) {
            func_02087678(g.ptr);
        }
        return;
    }
    s = ((Hdr *)b)->big0 ? *(int8_t **)(b + 8) : (int8_t *)(b + 1);
    if (*s == 0x2f) {
        func_02008f2c(buf, data_0213df88, 0, 4);
        func_02033014(a, buf, (uint32_t)b);
        func_020059cc(buf);
    } else {
        func_02033014(a, data_0213df88, (uint32_t)b);
    }
    if (g.flag != 0) {
        func_02087678(g.ptr);
    }
}
