#include "ffc/types.h"

typedef struct Node {
    struct Node *prev;
    struct Node *next;
    void *item;
} Node;

typedef struct List {
    uint32_t count;
    Node sentinel;
} List;

extern void func_0208763c(void *lock);
extern void func_02087678(void *lock);
extern void func_02023570(void *out, List *list, void *node);

void *func_02074d78(uint8_t *base, uint32_t idx, uint8_t type)
{
    uint32_t off = 0x4238;
    List *list;
    uint32_t buf[7];
    uint8_t *item;
    uint8_t *lock;
    Node *sent;
    Node *n;

    lock = base + off;
    func_0208763c(lock);
    list = *(List **)(base + (idx << 2) + (off - 0x80));
    if (list->count != 0) {
        n = list->sentinel.next;
        sent = &list->sentinel;
        if (n != sent) {
            do {
                item = (uint8_t *)n->item;
                if (type == item[8]) {
                    ((Node **)buf)[1] = n;
                    func_02023570(buf, list, &buf[1]);
                    func_02087678(lock);
                    return item;
                }
                n = n->next;
            } while (n != sent);
        }
        func_02087678(lock);
        return 0;
    }
    func_02087678(lock);
    return 0;
}
