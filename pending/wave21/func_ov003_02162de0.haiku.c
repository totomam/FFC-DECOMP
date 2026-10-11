#include "ffc/types.h"

extern int func_ov003_0214b318(void *a, int b);
extern void func_ov003_0214a57c(void *a, int b, int c, int d);

typedef struct {
    uint8_t pad[0x80];
    void *field;
} S;

void func_ov003_02162de0(S *p) {
    if (func_ov003_0214b318(p->field, 2)) {
        func_ov003_0214a57c(p->field, 0, 0, 2);
    }
}
