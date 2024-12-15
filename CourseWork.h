#pragma once
enum eCMD
{
    CMD_EXIT, CMD_NONE, CMD_EDIT, CMD_OPEN, CMD_SAVE, CMD_ADD,
    CMD_FIND, CMD_SORT, CMD_SHOW, CMD_DEL, CMD_NEW
};
struct CartHold
{
    char detail[20];
    char author[20];
    int year;
    int month;
    int day;
    int serial;
};