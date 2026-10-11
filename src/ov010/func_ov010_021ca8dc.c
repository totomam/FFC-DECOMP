#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} func_ov010_021ca8dc_S;

extern void func_ov009_021ada08(void *p);
extern void func_ov010_021cabcc(void *p);
extern void func_ov010_021ca800(void *p);
extern void func_02069724(func_ov010_021ca8dc_S *out, void *p);
extern void func_02069828(void *p, func_ov010_021ca8dc_S s);

void func_ov010_021ca8dc(void *param_0)
{
    func_ov010_021ca8dc_S tmp;
    func_ov010_021ca8dc_S *q = &tmp;
    uint8_t *p = (uint8_t *)param_0;

    p[0x27a] = 0;
    func_ov009_021ada08(param_0);
    func_ov010_021cabcc(p);
    func_ov010_021ca800(p);
    func_02069724(q, p);
    func_02069828(p, *q);
}
