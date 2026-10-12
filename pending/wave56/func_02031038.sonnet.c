#include "ffc/types.h"

typedef struct {
    uint8_t *begin;
    uint32_t size;
    uint32_t cap;
    uint32_t *owner;
    uint32_t old;
} Tmp;

typedef struct {
    uint8_t *begin;
    uint32_t size;
    uint32_t cap;
} Vec;

extern uint32_t func_02030fb8(Vec *s, uint32_t v);
extern void func_020312dc(Tmp *t, uint32_t n, uint8_t f);
extern void func_020095b8(uint8_t *dst, uint8_t *src);
extern void func_0203124c(Tmp *t);

void func_02031038(Vec *s, uint32_t n, uint8_t *src) {
    Tmp t;
    uint8_t *dst;
    uint8_t *end;
    uint32_t r;

    uint8_t *tb;
    uint32_t ts;
    uint32_t tc;
    uint8_t bytes[8];
    uint8_t zb;

    t.begin = 0;
    t.size = 0;
    t.cap = 0;
    t.owner = &s->cap;
    t.old = 0;
    r = func_02030fb8(s, s->size + n - s->cap);
    { uint8_t *pb = &bytes[3]; *pb = 0; zb = *pb; }
    func_020312dc(&t, r, zb);
    t.old = s->size;
    dst = t.begin + t.old * 16 + t.size * 16;

    if (n != 0) {
        do {
            if (dst != 0) {
                func_020095b8(dst, src);
                ((uint32_t *)dst)[3] = ((uint32_t *)src)[3];
            }
            t.size++;
            dst += 16;
            n--;
        } while (n != 0);
    }
    end = s->begin + s->size * 16;
    dst = t.begin + t.old * 16;
    while (end > s->begin) {
        end -= 16;
        dst -= 16;
        if (dst != 0) {
            func_020095b8(dst, end);
            ((uint32_t *)dst)[3] = ((uint32_t *)end)[3];
        }
        t.old--;
        t.size++;
    }
    tc = s->cap;
    s->cap = t.cap;
    t.cap = tc;
    tb = s->begin;
    s->begin = t.begin;
    t.begin = tb;
    ts = s->size;
    s->size = t.size;
    t.size = ts;
    func_0203124c(&t);
}
