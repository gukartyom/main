#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "First.h"
extern CartHold carts[10];
extern int count;
void getfile(char* file)
{
    puts("Введите название файла");
    scanf("%s", file);
}
void OpenFile()
{
    char file[20];
    getfile(file);
    FILE* inp = fopen(file, "r");
    if (!inp)
    {
        puts("Данного файла нет");
    }
    while (!feof(inp))
    {
        if (fgetc(inp) == '\n')
        {
            count++;
        }
    }
    fseek(inp, 0, SEEK_SET);
    rewind(inp);
    for (int i = 0; i < count; i++)
    {
        fscanf(inp, "%[^;];%[^;];%d;%d;%d;%d\n", carts[i].detail, carts[i].author,
            &carts[i].serial, &carts[i].year, &carts[i].month, &carts[i].day);
    }
    fclose(inp);
}
void Save()
{
    char file[20];
    getfile(file);
    FILE* inp = fopen(file, "w");
    for (int i = 0; i < count; i++)
    {
        fprintf(inp, "%s;%s;%d;%d;%d;%d\n", carts[i].detail, carts[i].author,
            carts[i].serial, carts[i].year, carts[i].month, carts[i].day);
    }
    fclose(inp);
}