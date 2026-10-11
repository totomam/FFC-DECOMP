#include "ffc/types.h"

typedef struct Obj {
    uint32_t w0;
    uint16_t h4;
    uint8_t b6[0x11 - 6];
    uint8_t b11;
} Obj;

typedef struct Glob {
    uint32_t w0;
    Obj *obj;
} Glob;

extern void func_ov000_02153050(void);
extern Glob data_ov000_0216e280;

int func_ov000_02152f60(void) {
    Obj *o = data_ov000_0216e280.obj;
    if (o == 0) {
        return 0;
    }
    if (o->w0 != 0) {
        o->h4 = 3;
        func_ov000_02153050();
        if (data_ov000_0216e280.obj->b11 != 0) {
            return 1;
        }
        return 0;
    }
    return 0;
}
