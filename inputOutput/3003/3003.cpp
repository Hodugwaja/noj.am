#include<iostream>

using namespace std;

int main()
{
	int king = 1;
	int queen = 1;
	int rook = 2;
	int bishop = 2;
	int knight = 2;
	int pawn = 8;

	int kingInput, queenInput, rookInput, bishopInput, knightInput, pawnInput;

	cin >> kingInput >> queenInput >> rookInput >> bishopInput >> knightInput >> pawnInput;

	cout << king - kingInput << " " << queen - queenInput << " " << rook - rookInput << " " << bishop - bishopInput << " " << knight - knightInput << " " << pawn - pawnInput << endl;
}

// https://www.acmicpc.net/problem/3003