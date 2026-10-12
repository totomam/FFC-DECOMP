#include "ffc/types.h"

extern void func_02090380(void *destination, const void *source, uint32_t length);
extern uint32_t func_02092864(const uint8_t *text);
extern int32_t func_02090410(const uint8_t *first, const uint8_t *second, uint32_t length);
extern uint8_t data_ov006_021b8c30[];

typedef struct {
    uint32_t len;
    uint8_t name[0x20];
    uint8_t pad[4];
    uint8_t code[6];
    uint16_t flag;
} Entry;

typedef struct {
    uint32_t count;
    Entry entries[1];
} Table;

int32_t func_ov006_021a0758(Table *a, Table *b, uint32_t *out)
{
    uint8_t buf1[0x22];
    uint8_t buf2[0x22];
    uint32_t idx;
    uint32_t j;
    uint32_t n;
    Entry *ea;
    Entry *eb;
    uint8_t *p;
    int found = 0;
    int f14 = 0;
    int f18 = 0;
    int ret = 0;

    idx = 0;
    if (a->count > 0) {
        ea = a->entries;
        do {
            p = buf1;
            n = 0x22;
            do {
                *p++ = 0;
            } while (--n != 0);
            func_02090380(buf1, ea->name, 0x20);
            buf1[ea->len] = 0;
            if (b->count != 0 && ea->len != 0 && ea->len <= 0x20 &&
                !(ea->len == 1 && (ea->name[0] == 0 || ea->name[0] == 0x20))) {
                for (j = 0; j < b->count; j++) {
                    eb = &b->entries[j];
                    n = func_02092864(buf1);
                    if (func_02090410(buf1, eb->name, n) == 0 &&
                        func_02090410(ea->code, eb->code, 6) == 0 &&
                        ea->flag == 0 && eb->flag != 0) {
                        found = 1;
                        break;
                    }
                }
            }
            if (found) {
                break;
            }
            idx++;
            ea++;
        } while (idx < a->count);
    }

    if (!found) {
        p = buf2;
        n = 0x22;
        do {
            *p++ = 0;
        } while (--n != 0);

        for (j = 0; j < b->count; j++) {
            eb = &b->entries[j];
            func_02090380(buf2, eb->name, 0x20);
            buf2[eb->len] = 0;
            n = func_02092864(data_ov006_021b8c30);
            if (func_02090410(buf2, data_ov006_021b8c30, n) == 0 && eb->flag == 0) {
                f14 = 1;
                break;
            }
        }

        idx = 0;
        ea = a->entries;
        for (idx = 0; idx < a->count; idx++) {
            func_02090380(buf2, ea->name, 0x20);
            buf2[ea->len] = 0;
            if (func_02092864(buf2) == func_02092864(data_ov006_021b8c30)) {
                n = func_02092864(data_ov006_021b8c30);
                if (func_02090410(buf2, data_ov006_021b8c30, n) == 0 && ea->flag == 0) {
                    f18 = 1;
                    break;
                }
            }
            ea++;
        }

        if (f18 && !f14) {
            found = 1;
        }
    }

    if (found) {
        *out = idx;
        ret = 1;
    }
    return ret;
}
