#include "ffc/types.h"

extern char data_ov012_021d4708[];
extern void func_0205d620(void *p);
extern void func_02056844(void *p);
extern void func_02056db0(void *p);

typedef struct {
    void *vt;
    uint8_t pad[0x114];
    void *arr[2];
} S;

void *func_ov012_021d2df8(S *p)
{
    uint32_t i;
    p->vt = data_ov012_021d4708;
    for (i = 0; i < 2; i++) {
        void *x = p->arr[i];
        if (x != 0) {
            if (x != 0) {
                func_0205d620(x);
                func_02056844(x);
            }
            p->arr[i] = 0;
        }
    }
    func_02056db0(p);
    func_02056844(p);
    return p;
}
