#ifndef F_F_OP_DRAW_TAG_H_
#define F_F_OP_DRAW_TAG_H_

#include "../dolphin/gctypes.h"
#include "../dolphin/mtx/vec.h"

struct MatrixPtr {
    /* 0x000 */ u8 field_0x0[0x6C];
    /* 0x06C */ Quaternion target;
    /* 0x07C */ Quaternion pos;
    /* 0x080 */ f32 zoom;
    /* 0x084 */ f32 roll;
    /* 0x088 */ f32 unk88; // I don't know which camera property this is
    /* 0x16B */ u8 field_0x16B[0xE3];
    /* 0x16C */ u8 camera_mode;
};

struct MatrixInfo {
    MatrixPtr* matrix_info;
};

extern MatrixInfo matrixInfo;

#endif