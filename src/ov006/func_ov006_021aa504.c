#include "ffc/types.h"

extern void func_ov006_021a6508(int *a, int *b);
extern void func_ov006_021a3aa0(int a, int b, int c);
extern int func_ov006_021b5404(uint8_t *p, int n);
extern uint8_t *data_ov006_021bc780;

int func_ov006_021aa504(void)
{
    int a;
    int b;
    int i;
    int n;

    func_ov006_021a6508(&a, &b);
    if (b == 1) {
        func_ov006_021a3aa0(0x35, -1, 0);
    }
    func_ov006_021a6508(&a, &b);
    if (a == 0) {
        if (data_ov006_021bc780[8] != 0) {
            return 1;
        }
        return 0;
    }
    if (b == 1 && data_ov006_021bc780[8] == 0) {
        return 0;
    }
    n = func_ov006_021b5404(data_ov006_021bc780 + 8, 0x20);
    switch (n) {
    case 0:
    case 5:
    case 13:
    case 16:
        return 1;
    case 10:
    case 26:
    case 32:
        for (i = 0; i < n; i++) {
            uint8_t c = data_ov006_021bc780[8 + i];
            if ((c < 0x30 || c > 0x39) && (c < 0x41 || c > 0x46) && (c < 0x61 || c > 0x66)) {
                return 0;
            }
        }
        return 1;
    default:
        return 0;
    }
}
