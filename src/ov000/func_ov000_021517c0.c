#include "ffc/types.h"
extern uint8_t *data_ov000_0216e268;
extern void func_02084b2c(void *p, int c, uint32_t n);
extern int func_ov000_02151754(int idx, void *p);

int func_ov000_021517c0(uint8_t *p) {
    int i;
    if (*(int *)(data_ov000_0216e268 + 0x1a90) != 2) return -1;
    func_02084b2c(p, 0, 0x780);
    for (i = 0; i < 16; i++) {
        *(int *)(p + i * 0x78) = 0;
    }
    i = 0;
    if (*(int *)(data_ov000_0216e268 + 0x1a88) > 0) {
        do {
            if (func_ov000_02151754(i, p + i * 0x78) == -1) break;
            i++;
        } while (i < *(int *)(data_ov000_0216e268 + 0x1a88));
    }
    return 0;
}
