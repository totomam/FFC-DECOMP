#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern int func_ov008_021a2918(void *obj, uint32_t arg, uint32_t flag);
extern int func_ov008_021a3c98(void *obj, uint32_t arg);
extern int func_ov008_021a5010(void *obj, uint32_t arg);

int func_020475b0(uint8_t *p)
{
    void *r;
    *(uint32_t *)(p + 0x94) = 0;
    switch (*(uint32_t *)(p + 0x90)) {
    case 0:
        r = func_0205681c(0x80);
        if (r == 0) return (int)r;
        return func_ov008_021a2918(r, *(uint32_t *)(p + 0x94), 0);
    case 1:
        r = func_0205681c(0x80);
        if (r == 0) return (int)r;
        return func_ov008_021a2918(r, *(uint32_t *)(p + 0x94), 1);
    case 2:
        r = func_0205681c(0x80);
        if (r == 0) return (int)r;
        return func_ov008_021a3c98(r, *(uint32_t *)(p + 0x94));
    case 3:
        r = func_0205681c(0x80);
        if (r == 0) return (int)r;
        return func_ov008_021a5010(r, *(uint32_t *)(p + 0x94));
    default:
        break;
    }
    return 0;
}
