#include <stdio.h>

int main(){

	int casos;
	scanf("%d\n", &casos);
	while(casos--){

		long long cad[100];
		char sig[100];
		long long aux[100];
		int i, max=0, min=0;

		for ( i = 0; i < 100; ++i)
		{
			cad[i]= 0;
			aux[i]=0;
		}

		for ( i = 0; i < 100; ++i)
		{
			scanf("%lld", &cad[i]);
			scanf("%c", &sig[i]);

			if(sig[i]=='\n'){
				break;
			}

		}

		for (i = 0; i < 100; ++i)
		{
			aux[i]=cad[i];
		}

		for (i = 0; i < 100; ++i)
		{
			if(sig[i]=='+'){
				aux[i+1]=aux[i]+aux[i+1];
				aux[i]=0;
			}

			if(sig[i]=='*'){
				cad[i+1]=cad[i]*cad[i+1];
				cad[i]=0;
			}
		}
		long long tots=1;
		long long totm=0;

		for (i = 0; i < 100; ++i)
		{
			if(aux[i]!=0){
				tots *= aux[i];
			}

			totm += cad[i];
		}

		printf("The maximum and minimum are %lld and %lld.\n", tots, totm );

	}

	return 0;
}
