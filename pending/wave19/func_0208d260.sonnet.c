#include "ffc/types.h"

typedef struct { uint8_t pad[0x150]; uint16_t v; } T;
typedef struct { uint32_t a; T *p; } G;
extern void func_02088978(void);
extern void func_0208898c(void);
extern G data_02143580;

uint32_t func_0208d260(void) {
    uint32_t r;
    T *p;
    func_02088978();
    p = data_02143580.p;
    if (p != 0) {
        r = p->v;
    } else {
        r = 0;
    }
    func_0208898c();
    return r;
}
