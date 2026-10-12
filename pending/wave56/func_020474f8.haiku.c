#include "ffc/types.h"

extern int func_0205681c(int flag);
extern int func_ov008_0219bae4(int r, uint32_t v);
extern int func_ov008_0219a614(void);
extern int func_ov008_0219e4f0(void);
extern int func_ov008_0219f7c4(void);
extern int func_ov008_021a0a1c(void);
extern int func_ov012_021cddd4(int r, int a, int b);

int func_020474f8(uint8_t *s)
{
    int r;

    switch (*(uint32_t *)(s + 0x90)) {
    case 0:
        r = func_0205681c(0x80);
        if (r)
            return func_ov008_0219bae4(r, *(uint32_t *)(s + 0x94));
        break;
    case 1:
        r = func_0205681c(0x80);
        if (r)
            return func_ov008_0219a614();
        break;
    case 2:
        r = func_0205681c(0x80);
        if (r)
            return func_ov008_0219e4f0();
        break;
    case 3:
        r = func_0205681c(0x80);
        if (r)
            return func_ov008_0219f7c4();
        break;
    case 4:
        r = func_0205681c(0x80);
        if (r)
            return func_ov008_021a0a1c();
        break;
    case 5:
        r = func_0205681c(0x8c);
        if (r)
            return func_ov012_021cddd4(r, 0, 0);
        break;
    default:
        return 0;
    }
}
