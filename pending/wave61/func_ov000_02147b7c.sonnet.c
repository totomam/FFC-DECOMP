#include "ffc/types.h"
extern void func_ov000_0214b69c(int, uint8_t *);
extern void func_ov000_02147ab0(int, uint8_t *);
extern uint8_t *data_02141510[];
void func_ov000_02147b7c(int a) {
    uint8_t *o = *(uint8_t **)(data_02141510[1] + 0xa4);
    if (o == 0) return;
    if (o[9] != 0) { func_ov000_0214b69c(a, o); return; }
    func_ov000_02147ab0(a, o);
}
