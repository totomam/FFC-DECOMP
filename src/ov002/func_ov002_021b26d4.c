/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/alloc_init_append_021B26D4.c, externs renamed. */
/* 021B26D4 (size 0x80) — alloc+init a 0x1C node (if non-null), then append
   several items to the vector at this+0x14. */
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

extern void* func_0205681c(u32 n);
extern int func_0203c2f4(void);
extern int func_0203b720(void);
extern void* func_02056aec(void* p);
extern void func_02056bc0(void* list, void* item);
extern void* func_02055a2c(void* a, void* b);
extern u32 data_ov002_021d58b8[];
void func_ov002_021b26d4(void* self)
{
    u8* t = (u8*)self;
    u8* lst;
    void* p;
    void* p98;
    int x, y;
    void* z;
    p = func_0205681c(0x1c);
    if (p != 0) {
        x = func_0203c2f4();
        *(u32*)((u8*)p + 0xc) &= ~0xffu;
        *(u32*)p = (u32)data_ov002_021d58b8;
        *(u32*)((u8*)p + 0x14) = x;
        *(u32*)((u8*)p + 0x18) = 3;
    }
    y = func_0203b720();
    z = func_02056aec(*(void**)(t + 0xa0));
    lst = t + 0x14;
    func_02056bc0(lst, z);
    func_02056bc0(lst, (void*)y);
    func_02056bc0(lst, p);
    p98 = *(void**)(t + 0x98);
    if (p98 != 0) {
        z = func_02055a2c(p98, *(void**)(t + 0x9c));
        func_02056bc0(t + 0x14, z);
    }
    z = func_02056aec(self);
    t = t + 0x14;
    func_02056bc0(t, z);
}
