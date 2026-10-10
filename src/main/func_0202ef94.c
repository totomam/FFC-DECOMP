#include "ffc/types.h"

extern void func_0208763c(uint8_t *p);
extern void func_02030dbc(void *flag, uint8_t *b, void *c, void *d);
extern void func_02087678(uint8_t *p);

typedef struct {
    uint32_t w0;
    uint8_t *p2;
    uint8_t *p1;
    uint8_t flag;
    uint32_t ten;
    uint32_t pad[4];
} Loc;

void func_0202ef94(uint8_t *a) {
    Loc l;
    l.p1 = a + 0x4d0;
    l.flag = 1;
    if (l.flag) {
        func_0208763c(l.p1);
    }
    l.ten = 16;
    l.p2 = a + 0x488;
    func_02030dbc(&l, a + 0x484, &l.p2, &l.ten);
    if (l.flag) {
        func_02087678(l.p1);
    }
}
