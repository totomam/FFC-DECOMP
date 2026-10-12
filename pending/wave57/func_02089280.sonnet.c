#include "ffc/types.h"

extern void func_02088978(void);
extern void func_0208898c(void);
extern void (*data_021418c8[32])(uint32_t, uint32_t, uint32_t);

typedef struct {
    volatile uint16_t cnt;
    uint16_t pad;
    volatile uint32_t data;
} IpcReg;

void func_02089280(void) {
    IpcReg *ipc = (IpcReg *)0x04000184;
    uint32_t v;
    uint32_t idx;
    int st;

    for (;;) {
        if (ipc->cnt & 0x4000) {
            ipc->cnt = (uint16_t)((3 << 14) | ipc->cnt);
            st = -3;
        } else {
            func_02088978();
            if (ipc->cnt & 0x100) {
                func_0208898c();
                st = -4;
            } else {
                v = *(volatile uint32_t *)0x04100000;
                func_0208898c();
                st = 0;
            }
        }

        if (st == -4) {
            return;
        }
        if (st == -3) {
            continue;
        }

        idx = v & 0x1f;
        if (idx == 0) {
            continue;
        }
        if (data_021418c8[idx] != 0) {
            data_021418c8[idx](idx, v >> 6, (v >> 5) & 1);
            continue;
        }
        if (v & 0x20) {
            continue;
        }
        v |= 0x20;
        if (ipc->cnt & 0x4000) {
            ipc->cnt = (uint16_t)((3 << 14) | ipc->cnt);
            continue;
        }
        func_02088978();
        if (!(ipc->cnt & 2)) {
            ipc->data = v;
        }
        func_0208898c();
    }
}
