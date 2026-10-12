#include "ffc/types.h"

extern uint8_t *func_0208ceec(void);
extern int func_0208cef8(void);
extern void func_02087874(void *p, int n);

typedef struct { uint32_t pad; uint16_t cnt; uint16_t stride; } T;
typedef struct { uint32_t pad; uint16_t key; } E;
typedef struct { uint32_t pad; uint16_t cnt; uint16_t stride; } T2;

int func_0208d4e4(T *a, uint32_t idx) {
    uint8_t *r6 = func_0208ceec();
    E *arr[15];
    int i;

    if (func_0208cef8()) {
        return 0;
    }
    if (idx < 1 || idx > 15) {
        return 0;
    }
    func_02087874(*(uint8_t **)(r6 + 4) + 0x182, 2);
    uint32_t mask = *(uint16_t *)(*(uint8_t **)(r6 + 4) + 0x182);
    if (!(mask & (1u << idx))) {
        return 0;
    }
    if (a->cnt == 0 || a->cnt > 15) {
        return 0;
    }
    arr[0] = (E *)((uint8_t *)a + 10);
    i = 0;
    do {
        if (idx == arr[i]->key) {
            return (int)arr[i];
        }
        i++;
        arr[i] = (E *)((uint32_t)a->stride + (uint32_t)arr[i - 1]);
    } while (i < ((T2 *)a)->cnt);
    return 0;
}
