#include "ffc/types.h"

extern void func_02089e64(void);
extern void func_02089e74(void);
extern void func_02087890(void *p, uint32_t n);

void func_0208a4d4(uint8_t *a0)
{
    uint8_t *base = a0;
    uint8_t *p;
    int i;
    uint8_t *r0;
    uint8_t *r1;
    uint8_t *r2;
    uint8_t *r3;

    func_02089e64();
    p = base;
    p += 0x18;
    for (i = 0; i < 4; i++) {
        r2 = base + i * 8;
        r3 = *(uint8_t **)(r2 + 0x18);
        if (r3 != 0) {
            r0 = *(uint8_t **)(r3 + 0x18);
            r1 = p + i * 8;
            if (r1 == r0) {
                r0 = *(uint8_t **)(r2 + 0x1c);
                *(uint8_t **)(r3 + 0x18) = r0;
                r0 = r3;
                r1 = (uint8_t *)0x3c;
            } else {
                if (r0 != 0) {
                    do {
                        r3 = *(uint8_t **)(r0 + 4);
                        if (r1 == r3) {
                            break;
                        }
                        r0 = r3;
                    } while (r3 != 0);
                }
                *(uint8_t **)(r0 + 4) = *(uint8_t **)(r2 + 0x1c);
                r1 = (uint8_t *)8;
            }
            func_02087890(r0, (uint32_t)r1);
        }
    }
    func_02089e74();
}
