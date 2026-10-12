#include "ffc/types.h"

extern int func_ov000_02159000(void);
extern void func_ov000_0215b70c(void);
extern void func_ov000_0215b7a4(int);
extern void func_ov000_0215bf3c(int);
extern void func_ov000_0215b9ac(void);
extern void func_ov000_0215c7c0(void *, uint8_t, void (*)(void), int, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);

typedef struct Outer { uint32_t pad; uint8_t *inner; } Outer;
extern Outer data_ov000_02170064;

int func_ov000_0215b188(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g, uint32_t h, uint32_t i)
{
    if (func_ov000_02159000() != 0 || *(uint32_t *)(data_ov000_02170064.inner + 0x24) != 3) {
        return 0;
    }
    func_ov000_0215b70c();
    *(uint32_t *)(data_ov000_02170064.inner + 0x80) = c;
    *(uint32_t *)(data_ov000_02170064.inner + 0x84) = d;
    func_ov000_0215b7a4(4);
    func_ov000_0215bf3c(2);
    func_ov000_0215c7c0(a, (uint8_t)(b - 1), func_ov000_0215b9ac, 0, e, f, g, h, i);
    return 1;
}
