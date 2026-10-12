#include "ffc/types.h"

extern int32_t func_02088978(void);
extern void func_0208898c(int32_t);
extern void func_02089f08(int32_t);
extern void func_020878ac(uint32_t *, uint32_t);
extern int32_t func_02089218(uint32_t, int32_t, uint32_t);
extern void func_0208a28c(void);
extern int32_t data_021419a4[];
extern uint32_t data_02141c80[];
extern int32_t data_021419c8[];

uint32_t func_0208a030(uint32_t flags)
{
    int32_t irq = func_02088978();
    int32_t r6 = 0;
    int32_t *s = data_021419a4;
    int32_t r7;
    int32_t ret;
    int32_t idx;

    if (data_021419a4[2] == 0) {
        func_0208898c(irq);
        return 1;
    }
    if (data_021419a4[7] >= 8) {
        if (!(flags & 1)) {
            func_0208898c(irq);
            return 0;
        }
        r6 = 1;
        do {
            func_02089f08(r6);
        } while (data_021419a4[7] >= 8);
        if (data_021419a4[2] == 0) {
            func_0208898c(irq);
            return r6;
        }
    }

    func_020878ac(data_02141c80, 6 << 10);
    ret = func_02089218(7, data_021419a4[2], 0);
    r6 = 0;
    if (ret < 0) {
        if (!(flags & 1)) {
            func_0208898c(irq);
            return r6;
        }
        r7 = 7;
        goto L00aa;
    }
    goto L00be;

L007e:
    func_0208898c(irq);
    func_02089f08(r6);
    irq = func_02088978();
    func_020878ac(data_02141c80, 6 << 10);
    if (data_021419a4[2] == 0) {
        func_0208898c(irq);
        return 1;
    }

L00aa:
    if (data_021419a4[7] >= 8) {
        goto L007e;
    }
    ret = func_02089218(r7, data_021419a4[2], 0);
    if (ret < 0) {
        goto L007e;
    }

L00be:
    idx = data_021419a4[6];
    ret = data_021419a4[2];
    data_021419c8[idx] = ret;
    idx = idx + 1;
    data_021419a4[6] = idx;
    if (idx > 8) {
        data_021419a4[6] = 0;
    }
    data_021419a4[2] = 0;
    data_021419a4[3] = 0;
    data_021419a4[7] = data_021419a4[7] + 1;
    data_021419a4[8] = data_021419a4[8] + 1;
    func_0208898c(irq);
    if (flags & 2) {
        func_0208a28c();
    }
    return 1;
}
