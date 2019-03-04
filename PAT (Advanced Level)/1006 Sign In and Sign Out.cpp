#include<cstdio>
struct person{
	char id[15];
	int hh, ss, mm;
}first, last, temp;

bool earlyer(person a, person b){
	if(a.hh < b.hh)
		return true;
	else if(a.ss < b.ss)
		return true;
	else if(a.mm < b.mm)
		return true;

	return false;
}

int main(){
	int n;
	scanf("%d", &n);
	first.hh = 24, first.mm = 60, first.mm = 60;
	last.hh = 0, last.mm = 0, last.mm = 0;

	for(int i = 0 ; i < n ; i++){
		scanf("%s %d:%d:%d", temp.id, &temp.hh, &temp.ss, &temp.mm);
		if(earlyer(temp, first))
			first = temp;

		scanf("%d:%d:%d", &temp.hh, &temp.ss, &temp.mm);
		if(earlyer(last, temp))
			last = temp;
	}

	printf("%s %s", first.id, last.id);

	return 0;
}
