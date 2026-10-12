#include "ffc/types.h"

typedef struct {
    uint32_t heap : 1;
    uint32_t cap : 31;
} Hdr;
typedef struct { uint8_t h : 1; uint8_t len : 7; } B;

extern void func_02091a24(void *msg);
extern uint32_t func_0208f42c(void);
extern void *func_0205681c(uint32_t size);
extern void func_02090398(void *dst, const void *src, uint32_t size);
extern void func_02056844(void *ptr);
extern uint8_t data_020aaf1c[];
extern uint8_t data_020aae14[];

void func_0200a690(uint8_t *p, uint32_t n) {
    uint32_t flag = 0;
    uint16_t *buf = 0;
    int sz;
    uint8_t *src;
    uint32_t cap, len;
    int heap;

    if (n > 0x7ffffffe) {
        func_02091a24(data_020aaf1c);
        func_0208f42c();
    }

    if (((Hdr *)p)->heap) {
        heap = 1;
    } else {
        heap = 0;
    }
    if (!heap) {
        len = ((B *)p)->len;
        cap = 5;
    } else {
        cap = *(uint32_t *)p >> 1;
        len = *(uint32_t *)(p + 4);
    }

    if (n < len) {
        n = len;
    }

    if (n + 1 <= 5) {
        n = 5;
    } else {
        n = (n + 8) & ~7u;
    }

    if (n == cap) {
        return;
    }

    if (n == 5) {
        buf = (uint16_t *)(p + 2);
        flag = 0;
        goto hs;
    } else if (n > cap) {
        buf = func_0205681c(n << 1);
        if (buf == 0) {
            func_02091a24(data_020aae14);
            func_0208f42c();
        }
    } else {
        buf = func_0205681c(n << 1);
        if (buf == 0) {
            func_02091a24(data_020aae14);
            func_0208f42c();
        }
        if (buf == 0) {
            return;
        }
    }

    flag = 1;
    if (heap) {
    hs:
        src = *(uint8_t **)(p + 8);
    } else {
        src = p + 2;
    }

    sz = ((int)(len*2)/2)*2; func_02090398(buf, src, sz);
    *(uint16_t*)((uint8_t*)buf + sz) = 0;
    if (heap) {
        func_02056844(src);
    }

    ((Hdr *)p)->heap = flag & 1;

    if (flag == 0) {
        ((B *)p)->len = len;
        return;
    }

    *(uint32_t *)(p + 4) = len;
    *(uint16_t **)(p + 8) = buf;
    *(uint32_t *)p = (n << 1) | (flag & 1);
}
