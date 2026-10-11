#include "ffc/types.h"

typedef struct {
    uint32_t a[7];
    uint32_t f1c;
    uint32_t b[3];
    uint32_t f2c;
} Obj;

extern Obj *func_ov000_02163350(void);
extern uint32_t func_ov000_0215b534(void);
extern void func_ov000_02163a38(uint32_t v);

void func_ov000_02163a04(void) {
    if (func_ov000_02163350()->f2c != 0xff) {
        if (func_ov000_02163350()->f2c == 1) {
            Obj *p = func_ov000_02163350();
            p->f1c = func_ov000_0215b534();
        } else {
            func_ov000_02163350()->f1c = 0;
        }
        func_ov000_02163a38(0);
    }
}
