#include <cstdio>
#include "Sudoku.h"

int main(){
	Sudoku ss;
	ss.readIn();
	int a=1;
	scanf("%d",&a);
	ss.rotate(a);
	ss.outMap();
	return 0;
}
