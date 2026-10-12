#include "ffc/types.h"

extern uint8_t *func_0208ceec(void);
extern int func_0208cef8(void);
extern void func_02087874(void *p, int n);

int func_0208d4e4(uint8_t *a, uint32_t idx) {
    uint8_t *r6 = func_0208ceec();
    uint8_t *arr[15];
    uint32_t mask;
    uint16_t key;
    int i;

    if (func_0208cef8()) {
        return 0;
    }
    if (idx < 1 || idx > 15) {
        return 0;
    }
    func_02087874(*(uint8_t **)(r6 + 4) + 0x182, 2);
    mask = *(uint16_t *)(*(uint8_t **)(r6 + 4) + 0x182);
    if (!(mask & (1u << idx))) {
        return 0;
    }
    if (*(uint16_t *)(a + 4) == 0 || *(uint16_t *)(a + 4) > 15) {
        return 0;
    }
    arr[0] = a + 10;
    i = 0;
    do {
        key = *(uint16_t *)(arr[i] + 4);
        if (idx == key) {
            return (int)arr[i];
        }
        i++;
        arr[i] = arr[i - 1] + *(uint16_t *)(a + 6);
    } while (i < *(uint16_t *)(a + 4));
    return 0;
}
