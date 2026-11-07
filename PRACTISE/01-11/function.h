#pragma once
#ifndef FUNCTION_H
#define FUNCTION_H

#include <iostream>
#include <cstdlib>
#include <ctime>


void FillArrayInt(int* arr, int size, int minVal, int maxVal);
void FillArrayDouble(double* arr, int size, double minVal, double maxVal);
void FillArrayChar(char* arr, int size);


void ShowArrayInt(const int* arr, int size);
void ShowArrayDouble(const double* arr, int size);
void ShowArrayChar(const char* arr, int size);


int MinElementInt(const int* arr, int size);
double MinElementDouble(const double* arr, int size);
char MinElementChar(const char* arr, int size);


int MaxElementInt(const int* arr, int size);
double MaxElementDouble(const double* arr, int size);
char MaxElementChar(const char* arr, int size);

void SortArrayInt(int* arr, int size);
void SortArrayDouble(double* arr, int size);
void SortArrayChar(char* arr, int size);


void EditArrayInt(int* arr, int size, int index, int newValue);
void EditArrayDouble(double* arr, int size, int index, double newValue);
void EditArrayChar(char* arr, int size, int index, char newValue);


#if defined(INTEGER)
#define FillArray    FillArrayInt
#define ShowArray    ShowArrayInt
#define MinElement   MinElementInt
#define MaxElement   MaxElementInt
#define SortArray    SortArrayInt
#define EditArray    EditArrayInt
typedef int          DataType;

#elif defined(DOUBLE)
#define FillArray    FillArrayDouble
#define ShowArray    ShowArrayDouble
#define MinElement   MinElementDouble
#define MaxElement   MaxElementDouble
#define SortArray    SortArrayDouble
#define EditArray    EditArrayDouble
typedef double       DataType;

#elif defined(CHAR)
#define FillArray    FillArrayChar
#define ShowArray    ShowArrayChar
#define MinElement   MinElementChar
#define MaxElement   MaxElementChar
#define SortArray    SortArrayChar
#define EditArray    EditArrayChar
typedef char         DataType;

#else


#define FillArray    FillArrayInt
#define ShowArray    ShowArrayInt
#define MinElement   MinElementInt
#define MaxElement   MaxElementInt
#define SortArray    SortArrayInt
#define EditArray    EditArrayInt
typedef int          DataType;
#endif

#endif