#include "ffc/types.h"
typedef struct G { uint32_t a, b, c; uint8_t *o; } G;
extern G data_ov000_0217004c;
extern void func_ov000_02159014(void);
extern int func_ov000_0215981c(void);
extern void func_ov000_021591a8(int, int, int);
extern void func_ov000_02159b50(void);
typedef void (*Fn)(void*, int, int);
void func_ov000_0215988c(void *a)
{
    if (data_ov000_0217004c.o != 0 && a != 0) {
        func_ov000_02159014();
        if (func_ov000_0215981c() != 0) {
            uint8_t *o = data_ov000_0217004c.o;
            if (*(uint32_t*)(o + 0x5c) != 0) {
                func_ov000_021591a8(4, *(uint32_t*)(o + 0x5c), 0);
                *(uint32_t*)(data_ov000_0217004c.o + 0x5c) = 0;
            }
            o = data_ov000_0217004c.o;
            ((Fn)*(uint32_t*)(o + 0x2c))(a, o[0x1d], *(uint32_t*)(o + 0x30));
        }
        func_ov000_02159b50();
    }
}
