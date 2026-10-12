#include "ffc/types.h"

extern void func_0208763c(void);

extern void func_02087678(void *p);
extern uint8_t data_0213e118[];

typedef struct { uint8_t b; } B;
typedef struct {
    uint8_t t;
    uint8_t pad[3];
    void *vp;
    uint8_t flag;
    uint8_t pad2[3];
    uint32_t x;
    uint32_t y;
    uint32_t z;
} Local;

extern void func_0205b7e8(void *dst, void *src, B val);

void func_0205b2e4(uint8_t *self, uint32_t a, uint32_t b, uint32_t c) {
    Local L;
    L.x = b;
    L.y = a;
    L.z = c;
    L.vp = data_0213e118;
    L.flag = 1;
    if (L.flag != 0) {
        func_0208763c();
    }
    L.t = 0;
    func_0205b7e8(self + 0xdc, &L.x, *(B*)&L.t);
    if (L.flag != 0) {
        func_02087678(L.vp);
    }
}
