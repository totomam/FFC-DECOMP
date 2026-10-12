/* cflags: -nothumb */
#include "ffc/types.h"

void func_01ff9670(uint32_t addr, uint8_t *buf, int32_t len) {
    volatile uint32_t *ctrl_base = (volatile uint32_t *)0x2fffe60;
    volatile uint32_t *romctrl = (volatile uint32_t *)0x40001a4;
    volatile uint8_t *cmd = (volatile uint8_t *)0x40001a1;
    volatile uint32_t *data = (volatile uint32_t *)0x4100010;
    uint32_t r3 = (*ctrl_base & ~0x7000000u) | 0xa1000000u;
    int32_t ip = -(int32_t)(addr & 0x1ff);
    uint32_t v;

    while (*romctrl & 0x80000000u)
        ;
    *cmd = 0x80;
    addr += ip;
    if (ip >= len) {
        return;
    }

    do {
        cmd[7] = 0xb7;
        cmd[8] = addr >> 24;
        cmd[9] = addr >> 16;
        cmd[10] = addr >> 8;
        cmd[11] = addr;
        cmd[12] = 0;
        cmd[13] = 0;
        cmd[14] = 0;
        *romctrl = r3;
        do {
            uint32_t r8 = *romctrl;
            if (r8 & 0x800000u) {
                v = *data;
                if (ip >= 0 && ip < len) {
                    *(uint32_t *)(buf + ip) = v;
                }
                ip += 4;
            }
            if (!(r8 & 0x80000000u)) {
                break;
            }
        } while (1);
        addr += 0x200;
    } while (ip < len);
}
