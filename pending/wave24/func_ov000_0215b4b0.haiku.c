#include "ffc/types.h"

typedef struct {
    uint32_t pad;
    uint8_t *obj;
} Glob;

typedef struct {
    uint8_t pad[0x64];
    uint8_t *sub;
} Obj;

extern Glob data_ov000_02170064;
extern int func_ov000_0215bf78(uint8_t *p);
extern uint8_t *func_ov000_02163654(uint8_t *p);

uint32_t func_ov000_0215b4b0(void)
{
    uint8_t *r;
    if (data_ov000_02170064.obj == 0 || func_ov000_0215bf78(data_ov000_02170064.obj) == 0) {
        return 0xff;
    }
    r = func_ov000_02163654(((Obj *)data_ov000_02170064.obj)->sub);
    if (r == 0) {
        return 0xff;
    }
    return r[0x16];
}
