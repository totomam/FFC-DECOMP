#include "ffc/types.h"

extern void func_02084774(int idx);
extern void func_020847b0(int idx);
extern int func_02087460(void);
extern void func_021da878(int idx);
extern uint32_t data_02143560[];

void func_0208b6fc(void) {
    uint32_t i;
    for (i = 0; i <= 3; i++) {
        uint32_t ctl;
        data_02143560[i] = *(volatile uint32_t *)(0x40000b8 + i * 12);
        ctl = *(volatile uint32_t *)(0x40000b8 + i * 12) & 0x38000000;
        if (ctl == 0x18000000 || ctl == 0x20000000) {
            func_02084774(i);
        } else if (ctl == 0x28000000) {
            while (*(volatile uint32_t *)0x40001a4 & 0x80000000) {
            }
        } else if (*(volatile uint32_t *)(0x40000b8 + i * 12) & 0x02000000) {
            func_020847b0(i);
        } else {
            func_02084774(i);
        }
        if (func_02087460() != 0) {
            func_021da878(i);
        }
    }
}
