#include "ffc/types.h"

extern void *func_ov003_0214649c(void *p);
extern uint32_t *func_ov003_02153470(void);
extern uint32_t *func_ov003_02154ee8(void *obj, uint32_t v);

int func_02043864(void *self, uint32_t *arr, uint32_t count, uint32_t val,
                  uint32_t a5, uint32_t a6, uint32_t a7, uint32_t a8)
{
    uint32_t first;
    uint32_t i;
    uint32_t *p;
    void *obj;

    func_ov003_0214649c(*(void **)((uint8_t *)self + 0x8c));
    first = *func_ov003_02153470();

    for (i = 0; i < count; i++) {
        obj = func_ov003_0214649c(*(void **)((uint8_t *)self + 0x8c));
        p = func_ov003_02154ee8(obj, arr[i]);
        if (first == val && p[1] == a5 && p[2] == a6 && p[3] == a7 && p[4] == a8) {
            return 1;
        }
    }
    return 0;
}
