/****************************/
/* 		FILE PetaPac.cpp 	*/
/* 		Dibuat oleh :		*/
/* 		Gerry Agustian		*/
/* 		161511010			*/
/* 		Mufid Jamaluddin 	*/
/* 		161511019			*/
/****************************/

#include "PetaPac.h"

/* 		Gerry Agustian		*/

short int item[17][23]{
	{1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1},
	{1,2,0,0,0,0,3,1,0,0,0,0,0,0,0,1,3,0,0,0,0,2,1},
	{1,0,1,1,1,1,0,1,0,1,1,0,1,1,0,1,0,1,1,1,1,0,1},
	{1,0,1,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,1,0,1},
	{1,0,0,0,1,1,1,0,1,1,0,1,0,1,1,0,1,1,1,0,0,0,1},
	{1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1},
	{1,0,1,1,1,1,0,1,1,1,9,4,9,1,1,1,0,1,1,1,1,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,1,9,1,1,0,1,1,9,9,9,9,9,1,1,0,1,1,9,1,0,1},
	{1,0,1,3,0,1,0,1,9,9,9,1,9,9,9,1,0,1,0,3,1,0,1},
	{1,0,1,0,0,0,0,0,9,9,9,9,9,9,9,0,0,0,0,0,1,0,1},
	{1,0,0,0,1,1,1,0,1,9,9,9,9,9,1,0,1,1,1,0,0,0,1},
	{1,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,1},
	{1,0,1,0,9,0,1,9,1,1,1,0,1,1,1,9,1,0,9,0,1,0,1},
	{1,0,1,1,1,0,1,0,0,0,0,0,0,0,0,0,1,0,1,1,1,0,1},
	{1,2,0,0,0,0,1,0,3,1,0,0,0,1,3,0,1,0,0,0,0,2,1},
	{1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1}
};

/* 		Mufid Jamaluddin 	*/

bool cekPeta(int X, int Y, int isiArr){
	if(item[Y][X]==isiArr) return true;
	else return false;
}

void setPeta(pos P, int isiArr){
	item[P.y][P.x]=isiArr;
}