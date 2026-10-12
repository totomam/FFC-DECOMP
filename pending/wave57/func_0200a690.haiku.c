#include "ffc/types.h"

typedef struct {
    uint32_t heap : 1;
    uint32_t cap : 31;
} Hdr;

extern void func_02091a24(void *msg);
extern uint32_t func_0208f42c(void);
extern void *func_0205681c(uint32_t size);
extern void func_02090398(void *dst, const void *src, uint32_t size);
extern void func_02056844(void *ptr);
extern uint8_t data_020aaf1c[];
extern uint8_t data_020aae14[];

void func_0200a690(uint8_t *p, uint32_t n) {
    uint32_t cap, len, flag = 0;
    uint16_t *buf = 0;
    uint8_t *src;
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
    if (heap) {
        len = *(uint32_t *)(p + 4);
        cap = *(uint32_t *)p >> 1;
    } else {
        uint32_t t = (uint32_t)p[0] << 24;
        cap = 5;
        len = t >> 25;
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
    } else if (n > cap) {
        buf = func_0205681c(n << 1);
        if (buf == 0) {
            func_02091a24(data_020aae14);
            func_0208f42c();
        }
        flag = 1;
    } else {
        buf = func_0205681c(n << 1);
        if (buf == 0) {
            func_02091a24(data_020aae14);
            func_0208f42c();
        }
        if (buf == 0) {
            return;
        }
        flag = 1;
    }

    if (heap) {
        src = *(uint8_t **)(p + 8);
    } else {
        src = p + 2;
    }

    func_02090398(buf, src, len << 1);
    buf[len] = 0;
    if (heap) {
        func_02056844(src);
    }

    *(uint32_t *)p = (*(uint32_t *)p & ~1u) | (flag & 1);

    if (flag == 0) {
        p[0] = (uint8_t)((p[0] & ~0xfe) | ((len << 1) & 0xfe));
        return;
    }

    *(uint32_t *)(p + 4) = len;
    *(uint16_t **)(p + 8) = buf;
    *(uint32_t *)p = (n << 1) | (flag & 1);
}
