#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x2c];
    volatile uint32_t f2c;
    volatile uint32_t f30;
    volatile uint32_t f34;
    volatile uint32_t f38;
    volatile uint32_t f3c;
    volatile uint32_t f40;
    volatile uint32_t f44;
    volatile uint32_t f48;
    uint8_t pad2[0x5c - 0x4c];
    volatile uint32_t f5c;
    uint8_t pad3[0x64 - 0x60];
    volatile uint32_t f64;
} Ctx;

void func_0209d220(Ctx *c, void (*fn)(void))
{
    volatile uint32_t a = c->f2c;
    volatile uint32_t b = c->f30;
    volatile uint32_t d = c->f34;
    volatile uint32_t e = c->f38;
    volatile uint32_t f = c->f3c;
    volatile uint32_t g = c->f40;
    volatile uint32_t h = c->f44;
    volatile uint32_t i = c->f48;
    volatile uint32_t s = c->f5c;
    volatile uint32_t t = c->f64;
    (void)a; (void)b; (void)d; (void)e; (void)f; (void)g; (void)h; (void)i; (void)s; (void)t;
    fn();
}
