#include "ffc/types.h"

extern uint32_t func_0205816c(void *first, uint32_t second, uint32_t third, uint32_t fourth, uint32_t fifth, uint32_t sixth, uint32_t seventh);
extern void func_0208763c(void);
typedef struct {
    uint8_t x;
} Byte;
extern void func_0205b7e8(void *dst, void *src, Byte val);
extern void func_02087678(void *p);
extern char data_0213e118[];

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
} Rec;

typedef struct {
    Byte a;
    void *p;
    volatile uint8_t flag;
} Guard;

uint32_t func_0205b19c(uint8_t *s, uint32_t r1, uint32_t size, uint32_t idx) {
    uint32_t res;
    Rec rec;
    Guard g;

    size = (size + 3) & ~3u;
    res = func_0205816c(s + 0x34, size, 0, 4, 0, 0, 0);

    rec.a = r1;
    rec.b = res;
    rec.c = size;

    g.p = data_0213e118;
    g.flag = 1;
    if (g.flag) {
        func_0208763c();
    }

    g.a.x = 0;
    func_0205b7e8(s + 0xac + idx * 0x18, &rec, g.a);

    if (g.flag) {
        func_02087678(g.p);
    }
    return res;
}
