#include "ffc/types.h"

typedef struct {
    uint32_t pad[5];
    uint16_t *src;
    uint16_t *dst;
    uint32_t size;
    uint32_t flag;
} S;

extern uint8_t data_020b055c;
extern uint8_t data_0213e018[];

extern void func_020849c4(void *a, void *b, uint32_t c);
extern void func_020849f4(void *a, void *b, uint32_t c);
extern void func_02084a58(void *a, void *b, uint32_t c);
extern uint32_t func_020878ac(void *p, uint32_t n);
extern void func_020845a8(uint32_t r, void *a, void *b, uint32_t c, uint32_t d);
extern void func_020844ec(uint32_t r, void *a, void *b, uint32_t c, uint32_t d);

static inline void conv(uint16_t *src, uint16_t *dst, uint32_t n, uint32_t a, uint32_t b) {
    while (n != 0) {
        uint32_t v = *src++;
        if ((uint8_t)v) v = (uint16_t)(v + a);
        if (v & 0xFF00) v = (uint16_t)(v + b);
        *dst++ = v;
        n--;
    }
}

void func_02060348(S *s) {
    uint32_t flag = s->flag;
    if (flag != 0) {
        uint32_t a = (flag << 20) >> 16;
        uint32_t b = (a << 24) >> 16;
        conv(s->src, s->dst, s->size >> 1, a, b);
    } else {
        uint32_t size = s->size;
        void *dst = s->dst;
        void *src = s->src;
        if (data_020b055c != 0 && data_0213e018[3] == 0 && (size & 0x1f) == 0) {
            uint32_t r;
            func_020878ac(src, size);
            r = func_020878ac(dst, size);
            if (((uint32_t)src | (uint32_t)dst | size) & 3) {
                func_020845a8(r, src, dst, size, 1);
            } else {
                func_020844ec(r, src, dst, size, 1);
            }
            return;
        }
        if (((uint32_t)src | (uint32_t)dst | size) & 3) {
            func_020849c4(src, dst, size);
        } else if (size & 0x1f) {
            func_020849f4(src, dst, size);
        } else {
            func_02084a58(src, dst, size);
        }
    }
}
