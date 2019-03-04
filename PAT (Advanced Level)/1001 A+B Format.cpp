#include<cstdio>
#include<cmath>
#include<iostream>

void fun(int c){
	if(c < 0)  printf("-");
    c = abs(c);

	int a[10] = {0};
	for(int k = 0; c > 0 ; k++)
	{
		a[k] = c % 1000;
	    c = c / 1000;
	}

	int i = 9;
	while( i > 0 && a[i] == 0)
		i--;

	if( i == 0) printf("%d", a[i]);
	else
	{
		printf("%d", a[i]);
		for(int j = --i; j >= 0 ; j--)
			printf(",%03d", a[j]);
	}
}
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	fun(a + b);

	//system("pause");
	return 0;
}
