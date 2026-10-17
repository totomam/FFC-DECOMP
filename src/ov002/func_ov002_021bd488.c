/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/sso_ptr_select.c, externs renamed. */
/* 0x021BD488 (46 bytes) -O4 */
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

typedef struct { u8 len; char data[15]; } SSO;
typedef struct { u32 f0 : 1; u32 f1 : 31; } Flags;
extern void func_ov002_021bc5b4(void* a, void* b, u32 c, u32 d);
void func_ov002_021bd488(void* self) {
    void* arg1;
    if (((Flags*)((u8*)self + 0x18))->f0 == 0) {
        arg1 = ((SSO*)((u8*)self + 0x18))->data;
    } else {
        arg1 = *(void**)((u8*)self + 0x20);
    }
    func_ov002_021bc5b4(*(void**)((u8*)self + 0x14), arg1,
                *(u32*)((u8*)self + 0x24), *(u32*)((u8*)self + 0x28));
    *(u32*)((u8*)self + 0xC) = (*(u32*)((u8*)self + 0xC) & ~0xFF) | 2;
}
