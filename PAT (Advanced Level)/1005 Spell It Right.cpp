#include<cstdio>
#include<cstring>
using namespace std;

int main(){
	int sum = 0;
	char s[105];
	char str[10][10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	gets(s);
	int len = strlen(s);

	for(int i = 0 ; i < len ; i++){
		sum += s[i] - '0';
	}

	int a[2000] = {0};
	int j;
	for(j = 0 ; sum ; j++){
		a[j] = sum % 10;
		sum = sum / 10;
	}
	if(j == 0)
		printf("zero");
	else{
		for(int i = --j ; i >= 0 ; i--){
			printf("%s", str[a[i]]);
			if(i > 0)
				printf(" ");
		}
	}

	return 0;
}
