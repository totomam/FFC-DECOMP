#include "ffc/types.h"

extern uint32_t data_02fe00d0;
extern uint32_t data_0213df0c;
extern void func_01ff8774(uint32_t *);

void func_01ff86c0(uint32_t *p) {
    uint32_t *heap;
    uint32_t *c;
    uint32_t nsz;
    uint32_t size;
    uint32_t *n;
    uint32_t nn;
    uint32_t hv, pv;
    uint32_t *cnt;
    uint32_t *q;

    heap = &data_02fe00d0;
    if (p == 0) {
        return;
    }
    c = p - 2;
    size = c[1];
    nsz = size & ~3u;
    cnt = &data_0213df0c;
    *cnt -= nsz;
    hv = heap[0];
    if (nsz <= hv) {
        uint32_t *h = heap;
        *h++ = hv & ~1u;
        c[2] = h[(nsz >> 3) - 2];
        h[(nsz >> 3) - 2] = (uint32_t)c;
        return;
    }
    if (size & 2) {
        return;
    }
    n = (uint32_t *)((uint8_t *)c + nsz);
    nn = n[1] & ~3u;
    if (!(size & 1)) {
        uint32_t a, b;
        pv = c[0];
        c = (uint32_t *)((uint8_t *)c - pv);
        nsz += pv;
        a = c[2];
        b = c[3];
        ((uint32_t *)a)[3] = b;
        ((uint32_t *)b)[2] = a;
    }
    if (n != (uint32_t *)heap[11]) {
        q = (uint32_t *)((uint8_t *)n + nn);
        uint32_t t = q[1] << 31;
        n[1] = nn;
        if (!t) {
            uint32_t a, b;
            a = n[2];
            b = n[3];
            nsz += nn;
            ((uint32_t *)a)[3] = b;
            ((uint32_t *)b)[2] = a;
        }
        {
            uint32_t *s0 = (uint32_t *)((uint8_t *)heap + 0x3c);
            uint32_t *s = s0 - 2;
            uint32_t *f = (uint32_t *)s[2];
            c[3] = (uint32_t)s;
            c[2] = (uint32_t)f;
            s[2] = (uint32_t)c;
            f[3] = (uint32_t)c;
        }
        c[1] = 1 | nsz;
        *(uint32_t *)((uint8_t *)c + nsz) = nsz;
    } else {
        nsz += nn;
        c[1] = 1 | nsz;
        heap[11] = (uint32_t)c;
    }
    if (nsz < 0x10000) {
        return;
    }
    if (heap[0] & 1) {
        return;
    }
    func_01ff8774(heap);
}
