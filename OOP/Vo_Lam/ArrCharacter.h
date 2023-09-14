#pragma once
#include<iostream>
#include"Character.h"

using namespace std;

//Mảng phần tử 
class ArrCharacter
{
	Character* arr[50];
	int N;
public:
	ArrCharacter();
	~ArrCharacter();
	void Nhap();
	void Max();
	void Xuat();
};