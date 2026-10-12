#include "ffc/types.h"

extern void func_02091a24(void *);
extern void func_0208f42c(void);
extern void *func_0205681c(uint32_t);
extern void func_02090398(void *dst, void *src, uint32_t n);
extern void func_02056844(void *);
extern uint8_t data_020a7e30[];
extern uint8_t data_020a7e14[];

typedef struct {
    uint32_t heap : 1;
    uint32_t rest : 31;
} Hdr;

void func_020059e4(uint32_t *s, uint32_t n)
{
    uint8_t *b = (uint8_t *)s;
    Hdr *h = (Hdr *)s;
    uint32_t heap;
    uint32_t cap, len;
    uint32_t newheap;
    uint8_t *newp;
    uint8_t *oldp;

    if (n > 0x7ffffffe) {
        func_02091a24(data_020a7e30);
        func_0208f42c();
    }
    if (h->heap) {
        heap = 1;
    } else {
        heap = 0;
    }
    if (heap == 0) {
        len = ((uint32_t)b[0] << 24) >> 25;
        cap = 11;
    } else {
        uint32_t w = s[0];
        len = s[1];
        cap = w >> 1;
    }
    if (n < len) {
        n = len;
    }
    if (n + 1 <= 11) {
        n = 11;
    } else {
        n = (n + 16) & ~15u;
    }
    if (n == cap) {
        return;
    }
    if (n == 11) {
        newp = b + 1;
        newheap = 0;
        oldp = (uint8_t *)s[2];
        goto copy;
    } else if (n > cap) {
        newp = func_0205681c(n);
        if (newp == 0) {
            func_02091a24(data_020a7e14);
            func_0208f42c();
        }
        newheap = 1;
    } else {
        newp = func_0205681c(n);
        if (newp == 0) {
            func_02091a24(data_020a7e14);
            func_0208f42c();
        }
        if (newp == 0) return;
        newheap = 1;
    }
    if (heap) oldp = (uint8_t *)s[2]; else oldp = b + 1;
copy:
    func_02090398(newp, oldp, len);
    newp[len] = 0;
    if (heap) {
        func_02056844(oldp);
    }
    s[0] = (s[0] & ~1u) | (newheap & 1);
    if (newheap == 0) {
        b[0] = (uint8_t)((b[0] & 1) | ((len << 1) & 0xfe));
    } else {
        s[1] = len;
        s[2] = (uint32_t)newp;
        s[0] = (n << 1) | (s[0] & 1);
    }
}
