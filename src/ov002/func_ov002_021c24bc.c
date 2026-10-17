/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/dtor_dispatch_free_021C24BC.c, externs renamed. */
/* Matched: 0x021C24BC  size 0x44  -O4 */
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

extern u32 data_ov002_021d70cc;
extern u8 data_ov002_021d7990;
extern void func_02059c0c(u32);
extern void func_0203c32c(void);
extern void func_02060bf4(void);
extern void func_02056db0(void*);
extern void func_02056844(void*);
void* func_ov002_021c24bc(void* self) {
    u32 x;
    u8 flag;
    *(u32*)self = (u32)&data_ov002_021d70cc;
    x = *(u32*)((u8*)self + 0x88);
    if (x - 2 <= 1) {
        func_02059c0c(*(u32*)(*(u32*)((u8*)self + 0x80) + 0x8c));
        flag = 1;
    } else {
        flag = 0;
    }
    data_ov002_021d7990 = flag;
    func_0203c32c();
    func_02060bf4();
    func_02056db0(self);
    func_02056844(self);
    return self;
}
