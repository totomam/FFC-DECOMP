#include "ffc/types.h"

extern uint32_t func_0209a76c(uint32_t a, uint32_t b);
extern uint8_t *func_02009730(void *p, uint32_t n);
extern void func_0200b65c(uint8_t *dst, uint8_t *src);
typedef struct { uint16_t pad; uint8_t flag; uint8_t z; } S4;
extern void func_02009888(void *p, uint32_t n, S4 v);
extern void func_020095b8(uint8_t *dst, uint8_t *src);
extern void func_0203d5cc(void *p, uint32_t n, uint8_t *storage);

typedef struct {
    uint8_t *begin;
    uint32_t len;
    uint32_t cap;
} Vec;


void func_0203d170(Vec *p, uint8_t *first, uint8_t *last)
{
    S4 s;
    uint32_t n = func_0209a76c((uint32_t)(last - first), 12);
    uint8_t *r7;
    uint32_t cnt;
    uint8_t *src, *dst, *end;

    s.pad = 0; s.flag = 0; s.z = 0;
    if (n <= p->cap) {
        uint32_t *pc = (p->len < n) ? &p->len : &n;
        cnt = *pc;
        end = first + cnt * 12;
        dst = p->begin;
        for (src = first; src < end; src += 12, dst += 12) {
            func_0200b65c(dst, src);
        }
        if (n < p->len) {
            func_02009888(p, p->len - n, *(S4 *)&s);
            return;
        }
        if (p->len >= n) {
            return;
        }
        dst = p->begin + p->len * 12;
        src = end;
        while (src != last) {
            if (dst) {
                func_020095b8(dst, src);
            }
            p->len++;
            src += 12;
            dst += 12;
        }
        return;
    }
    r7 = func_02009730(p, n - p->cap);
    func_0203d5cc(p, n, r7);
    dst = p->begin + p->len * 12;
    src = first;
    while (src != last) {
        if (dst) {
            func_020095b8(dst, src);
        }
        p->len++;
        src += 12;
        dst += 12;
    }
}
