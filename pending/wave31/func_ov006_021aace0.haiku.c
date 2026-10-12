#include "ffc/types.h"

extern void func_ov006_021aab88(void);
extern uint8_t *data_ov006_021bc784;

void func_ov006_021aace0(void) {
    int i;
    int j;
    for (i = 0; i < 4; i++) {
        uint8_t *p = data_ov006_021bc784 + 8 + 3 * i;
        for (j = 0; j < 3; j++) {
            uint8_t c = p[j];
            if (c == 0x30 || c == 0x20 || c == 0) {
                p[j] = (j == 2) ? 0x30 : 0x20;
            } else {
                break;
            }
        }
    }
    func_ov006_021aab88();
}
