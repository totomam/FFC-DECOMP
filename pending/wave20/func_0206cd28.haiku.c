#include "ffc/types.h"

extern uint8_t *data_0213e178;
extern void func_0206c1e8(uint8_t *p);
extern void func_0208d320(void (*f)(void));
extern void func_0206cd64(void);

void func_0206cd28(void) {
    *(uint32_t *)(data_0213e178 + 0x30b0) = 2;
    *(uint8_t *)(data_0213e178 + 0x30b4) = 1;
    {
        uint8_t *p = *(uint8_t **)(data_0213e178 + 0x3220);
        *p = 1;
    }
    func_0206c1e8(data_0213e178 + 0x3d);
    func_0208d320(func_0206cd64);
}
