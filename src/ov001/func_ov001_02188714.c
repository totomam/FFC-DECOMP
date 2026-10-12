#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern uint8_t data_ov001_02195780[];

typedef struct {
    void (*fn)(int, int, int);
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t f14;
} S;

extern S data_ov001_02195764;

void func_ov001_02188714(void) {
    uint32_t t;
    int r4 = 0;
    int r5 = 0;

    func_0208763c(data_ov001_02195780);
    t = data_ov001_02195764.f10;
    if (t == 0 && data_ov001_02195764.f14 == 4) {
        if (data_ov001_02195764.f4 == 0) {
            r4 = 1;
            data_ov001_02195764.f4 = 1;
        }
    } else {
        if (data_ov001_02195764.f14 - 3 <= 1) {
            r4 = 1;
            data_ov001_02195764.f14 = 1;
        }
    }
    if (t == 4) {
        data_ov001_02195764.f14 = 0;
        data_ov001_02195764.f10 = 0;
        r5 = 1;
    }
    func_02087678(data_ov001_02195780);
    if (data_ov001_02195764.fn != 0) {
        if (r5) {
            data_ov001_02195764.fn(4, 0, -1);
            return;
        }
        if (r4) {
            data_ov001_02195764.fn(data_ov001_02195764.f10, data_ov001_02195764.fc, data_ov001_02195764.f8);
        }
    }
}
