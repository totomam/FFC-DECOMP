/* cflags:  */
/* From arcnid/ffc-decomp src/battle/vec_scan_push_or_notify_021c8794.c, externs renamed. */
#ifndef BATTLE_H
#define BATTLE_H

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;

typedef struct BattleState BattleState;
typedef struct Vivosaur Vivosaur;
typedef struct AttackInfo AttackInfo;

u32 rand_range(u32* rng_state, u32 max);

u32* BattleState_GetRng(BattleState* state);
s32 BattleState_GetTeamSize(BattleState* state);
Vivosaur* BattleState_GetVivosaur(BattleState* state, s32 index);

s32 Vivosaur_GetAbilityInfo(Vivosaur* vivo);
s32 Vivosaur_CheckSkill(s32 info, s32 skill_id);
s32 Vivosaur_GetType(Vivosaur* vivo);

#endif

/* Matched: 021C8794, size 0x80 (128B incl 2B trailing pad), -O4,p.
   Scan a range [it,end) at *self/*(self+4); for the first element where
   func_ov002_021c8694(*it) is true, compute val=func_ov002_021c86a4(*it) and push it into vector v
   {data@0,count@4,cap@8}: fast path count++/data[count-1]=val (plain reload,
   NOT volatile - the count/cap values stay live in regs from the guard cmp),
   slow path func_0200d5d4(v,&val,Al) with a hoisted zero (movs r3,#0 between the
   cap load and the cmp - allocator-temp-ctor hoist, needs
   #pragma opt_propagation off). Either way, then func_020487a0(self,it,Al()) with
   a FRESH (non-shared) zero byte, and return immediately (no further scan).
   If func_ov002_021c8694 is false, it++ and loop; falling off the end returns without
   calling anything.
   KEYS:
   - zero for func_0200d5d4's Al is a local `zv` assigned 0 right after func_ov002_021c86a4() --
     needs the pragma to get the hoist-before-cmp placement and r3 (not the
     allocator's natural r5 choice without the pragma).
   - zero for func_020487a0's Al must be a SEPARATE literal 0 (NOT shared with
     zv) - sharing one zv for both materializes a 2nd reuse that doesn't
     match; the original truly re-zeros a fresh reg (movs r0,#0) later.
   - val/Al byte-structs staged in ONE combined struct w{a0,pad0,a1,pad1[5],
     val,pad2[4]} (16B) so sp+0=a0 (someCall byte), sp+2=a1 (push byte),
     sp+8=val, matching the original's exact immediate offsets and giving
     the right push{r3,r4,r5,r6,r7,lr}+sub sp,#0x10 frame.
   - address-first `Al* q = &w.a; q->b = ...;` pointer-local shape for both
     byte structs (not an arr[2]+volatile array).
   - the count++/data[count-1]=val store must NOT use volatile - it simply
     reuses r1/r0 already loaded for the cmp guard (adding volatile forces
     a spurious reload and reorders the data-pointer load too early). */
#pragma opt_propagation off
typedef struct { u8 b; } Al;

extern s32 func_ov002_021c8694(u32);                             /* 0x21C8694 */
extern u32 func_ov002_021c86a4(u32);                               /* 0x21C86A4 */
extern void func_0200d5d4(void* v, u32* val, Al a);     /* 0x200D5D4 */
extern void func_020487a0(void* self, u32* it, Al a);   /* 0x20487A0 */

void func_ov002_021c8794(u8* self, u8* v) {
    u32* it;
    u32* end;
    struct {
        Al a0;
        u8 pad0;
        Al a1;
        u8 pad1[5];
        u32 val;
        u8 pad2[4];
    } w;
    Al* q0;
    Al* q1;
    u32 zv;
    it = *(u32**)self;
    end = it + *(u32*)(self + 4);
    if (it != end) {
        do {
            if (func_ov002_021c8694(*it)) {
                w.val = func_ov002_021c86a4(*it);
                zv = 0;
                if (*(u32*)(v + 4) < *(u32*)(v + 8)) {
                    u32 cnt;
                    cnt = *(u32*)(v + 4) + 1;
                    *(u32*)(v + 4) = cnt;
                    *((u32*)(*(u32**)v) + (cnt - 1)) = w.val;
                } else {
                    q1 = &w.a1;
                    q1->b = (u8)zv;
                    func_0200d5d4(v, &w.val, *q1);
                }
                q0 = &w.a0;
                q0->b = 0;
                func_020487a0(self, it, *q0);
                return;
            }
            it++;
        } while (it != end);
    }
}
