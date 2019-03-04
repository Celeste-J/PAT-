#include<cstdio>
#include<iostream>

int main(){
	int k, count = 0;
	double a[1005] = {0.0};
	scanf("%d", &k);
	for(int i = 0 ; i < k ; i++)
	{
		int n;
		double aa;
		scanf("%d %lf", &n, &aa);
		a[n] += aa;
	}

	scanf("%d", &k);
	for(int i = 0 ; i < k ; i++)
	{
		int n;
		double aa;
		scanf("%d %lf", &n, &aa);
		a[n] += aa;
	}

	for(int i = 0 ; i < 1005 ; i++){
		if(a[i] != 0)
			count++;
	}

	if( count > 0)
		printf("%d ", count);
	else 
		printf("0");

	for(int j = 1004; j > -1 && count > 0; j--){
		if(a[j] != 0 && count == 1){
			printf("%d %.1lf", j, a[j]);
			count--;
		}
		if(a[j] != 0 && count > 1){
			printf("%d %.1lf ", j, a[j]);
			count--;
		}	
	}

	//system("pause");
	return 0;
}
