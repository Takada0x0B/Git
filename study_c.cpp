// Study_C.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <string>
int sleep(int ms)
{
	clock_t c1=clock(),c2;
	
	do
	{
		if(c2=clock() == (clock_t)-1)
			return 0;
	
	} while (1000*(c2-c1)/CLOCKS_PER_SEC<ms);
	return 1;
}

int main()
{
	int x;
	printf("こんにちは\n");
	x=sleep(1000);
	printf("%d\n",x);
	fflush(stdout);

	
	return 0;
}