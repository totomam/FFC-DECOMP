#include "ffc/types.h"

extern uint8_t data_ov006_021ba150[];
extern void func_ov006_0219c83c(int x);
extern int func_0208d87c(void *a, void *b, uint16_t c);
extern void func_0208d320(void *a);
extern void func_ov006_0219b53c(void);

#define GC() (*(uint8_t **)(data_ov006_021ba150 + 0xc))

int func_ov006_0219c414(void)
{
    int r;

    *(uint16_t *)(GC() + 0x528) = 0;
    *(uint16_t *)(GC() + 0x52a) = 0;
    *(uint16_t *)(GC() + 0x526) = 0;
    *(uint16_t *)(GC() + 0x548) = 0;

    func_ov006_0219c83c(30);

    if (*(uint32_t *)(*(uint8_t **)(data_ov006_021ba150 + 0x10) + 0x1320) == 0) {
        do {
            r = func_0208d87c(*(void **)(data_ov006_021ba150 + 4), *(void **)(GC() + 0x508), *(uint16_t *)data_ov006_021ba150);
        } while (r == 4);
        if (r != 2) {
            return 8;
        }
        func_0208d320(*(void **)(GC() + 0x508));
        *(uint8_t *)(GC() + 0x50d) = 1;
        return 0;
    } else {
        func_0208d320(*(void **)(GC() + 0x508));
        *(uint8_t *)(GC() + 0x50d) = 1;
        func_ov006_0219b53c();
        return 0;
    }
}
