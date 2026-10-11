#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} S;

extern uint8_t data_ov009_021b080c[];
extern uint8_t data_ov009_021b0a84[];
extern void func_02005988(void *obj, uint32_t v);
extern void func_ov009_021a3e94(void *a, uint32_t b, void *c, S s);
extern void *func_020059cc(void *object);
extern void func_02069320(void *object, uint32_t value);
extern void func_02069328(void *object, uint32_t value);

void *func_ov009_021a402c(void *a, uint32_t b)
{
    uint32_t local[3];
    S s;

    func_02005988(local, *(uint32_t *)(data_ov009_021b080c + 0xc));
    s = *(S *)(data_ov009_021b080c + 0x40);
    func_ov009_021a3e94(a, b, local, s);
    func_020059cc(local);
    *(uint8_t **)a = data_ov009_021b0a84;
    func_02069320(a, 0x100);
    func_02069328(a, 1);
    return a;
}
