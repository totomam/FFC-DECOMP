#include "ffc/types.h"

typedef struct Node {
    struct Node *next;
    struct {
        uint32_t used : 1;
        uint32_t size : 31;
    } hdr;
    uint32_t b;
    uint32_t c;
} Node;

extern uint32_t func_ov006_0219cb94(void *p);
extern uint32_t func_020871d4(const void *object);
extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t irq);
extern void func_020870a0(void *object);
extern void *data_ov006_021ba1c4;

void func_ov006_0219cbc4(Node *obj, uint32_t a1, uint32_t a2, uint32_t size)
{
    uint8_t *heap;
    uint32_t irq;
    uint32_t align;

    heap = (uint8_t *)data_ov006_021ba1c4;
    if (!func_ov006_0219cb94(&data_ov006_021ba1c4)) {
        return;
    }
    if (obj->hdr.used) {
        return;
    }
    if (size > 0x1f) {
        align = func_020871d4(heap);
        if (size == 0x20) {
            size = align ? align - 1 : 0;
        } else if (size == 0x21) {
            size = (align < 0x1f) ? align + 1 : 0x1f;
        } else if (size == 0x22) {
            size = align;
        } else {
            size = 0x1f;
        }
    }
    irq = func_02088978();
    obj->hdr.used = 1;
    obj->hdr.size = size;
    obj->b = a1;
    obj->c = a2;

    if (*(Node **)(heap + 0xc0) == 0) {
        if ((void *)obj == (void *)(heap + 0xc4)) {
            data_ov006_021ba1c4 = 0;
        }
        *(Node **)(heap + 0xc0) = obj;
        func_020870a0(heap);
    } else {
        Node **head = (Node **)(heap + 0xc0);
        if ((void *)obj == (void *)(heap + 0xc4)) {
            Node *last = *head;
            while (last->next) {
                last = last->next;
            }
            last->next = obj;
            data_ov006_021ba1c4 = 0;
        } else {
            Node *cur = *head;
            if (cur->hdr.size > size) {
                *head = obj;
                obj->next = cur;
            } else {
                for (;;) {
                    Node *nx = cur->next;
                    if (nx == 0 || nx->hdr.size > size) {
                        obj->next = nx;
                        cur->next = obj;
                        break;
                    }
                    cur = nx;
                }
            }
        }
    }
    func_0208898c(irq);
}
