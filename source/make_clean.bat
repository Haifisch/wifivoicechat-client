@echo off

echo �N���[���R���p�C���̂��߂Ɉꎞ�t�@�C�����폜���܂��Bmake�̎������s�͂��܂���B
echo ���~����ꍇ��(Windows)����{�^�����������A(DOS)Ctrl+C�������ĉ������B
pause

rd /q /s arm7\build\
rd /q /s arm9\build\

del _BOOT_MP.arm7
del _BOOT_MP.arm9
del _BOOT_MP.nds
del _BOOT_MP.ds.gba
del arm7\_BOOT_MP.arm7.elf
del arm9\_BOOT_MP.arm9.elf

