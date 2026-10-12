#include "ffc/types.h"

extern uint32_t data_020b2924[];
extern uint8_t data_02140ec0[];
extern void func_0207d524(uint32_t addr);
extern void func_02084ca4(uint8_t *dst, uint8_t *src, uint32_t n);
extern void func_0207d55c(void);
extern void func_0207db64(void);

uint32_t func_0207d67c(uint32_t unused, uint8_t *ptr, uint32_t addr, uint32_t len) {
    volatile uint32_t *hw = (volatile uint32_t *)0x40001a4;
    volatile uint32_t *fifo = (volatile uint32_t *)0x4100010;
    uint32_t blk, ret, cur;
    uint32_t page, n, cnt, st, v, off;

    cur = data_020b2924[1];
    ret = len;
    blk = (uint32_t)hw >> 17;

    while (len != 0) {
        uint8_t *dst = ptr;
        page = addr & 0xfffffe00;
        if (page == cur) {
            dst = data_02140ec0;
        } else {
            if (!(page == addr && ((uint32_t)ptr & 3) == 0 && len >= blk)) {
                cur = page;
                dst = data_02140ec0;
            }
            func_0207d524(page);
            cnt = 0;
            do {
                st = *hw;
                if (st & 0x800000) {
                    v = *fifo;
                    if (cnt < 0x80) {
                        ((uint32_t *)dst)[cnt++] = v;
                    }
                }
            } while (st & 0x80000000);
        }
        n = blk;
        if (dst == data_02140ec0) {
            off = addr - page;
            n = blk - off;
            if (len <= n) n = len;
            func_02084ca4(data_02140ec0 + off, ptr, n);
        }
        ptr += n;
        len -= n;
        addr += n;
    }
    func_0207d55c();
    func_0207db64();
    data_020b2924[1] = cur;
    return ret;
}
