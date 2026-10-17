/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/virt_notify_switch_mode_events_021BC6E0.c, externs renamed. */
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

/* Matched: 0x021BC6E0  size 0xB8  flags: -O4 (also -O4,p)
   Guarded notifier: bail if *(self+0x80)==0 or b==-1. func_02056c4c(queue), then
   virtual m->vt[0xE](m,b,1); membership switch on b {1,2,3,0xD,0xE,0xF,
   0x19,0x1A,0x1B} -> ok=0 (compare tree); mode=ok?1:2; virtual
   m->vt[8](m,mode); push func_0203b720() and func_020655b8(m) results onto *(self+0x90);
   t=func_ov002_021bc798(self,2); self+=0x90 (param mutation); push t. */

typedef u32 (*VFn)(void*, s32, s32);
typedef u32 (*VFn2)(void*, s32);

extern void func_02056c4c(void*);            /* 0x2056c4c */
extern u32 func_0203b720(void);              /* 0x203b720 */
extern void func_02056bc0(void*, u32);     /* 0x2056bc0 */
extern u32 func_020655b8(void*);             /* 0x20655b8 */
extern u32 func_ov002_021bc798(void*, u32);      /* 0x21bc798 */

void func_ov002_021bc6e0(u8* self, s32 b)
{
    void* m;
    u32 ok;
    s32 mode;
    u32 t;

    if (*(void**)(self + 0x80) == 0) {
        return;
    }
    if (b == -1) {
        return;
    }
    func_02056c4c(*(void**)(self + 0x90));
    ok = 1;
    m = *(void**)(self + 0x80);
    (*(VFn**)m)[0xE](m, b, 1);
    switch (b) {
    case 1:
    case 2:
    case 3:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x19:
    case 0x1A:
    case 0x1B:
        ok = 0;
        break;
    }
    mode = 1;
    if (ok == 0) {
        mode = 2;
    }
    m = *(void**)(self + 0x80);
    (*(VFn2**)m)[8](m, mode);
    func_02056bc0(*(void**)(self + 0x90), func_0203b720());
    func_02056bc0(*(void**)(self + 0x90), func_020655b8(*(void**)(self + 0x80)));
    t = func_ov002_021bc798(self, 2);
    self += 0x90;
    func_02056bc0(*(void**)self, t);
}
