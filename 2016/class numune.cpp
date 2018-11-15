	#include <cstdio>
	using namespace std;
	
	class data{
		public:
		int saat, deq;
		
		void vaxt_daxil()
		{
			printf("Saat: ");
			scanf("%d", &saat);
			printf("Deq: ");
			scanf("%d", &deq);
		}
		void vaxt_qaytar()
		{
			printf("\nSaat: %d", saat);
			printf("\nDeq: %d", deq);
		}
	};
	
	void topla(data a, data b)
	{
		printf("\nSaat: %d\nDeq: %d", a.saat, a.deq);
	}
	
	int main()
	{
		data p1, p2;
		p1.vaxt_daxil();
		p2.vaxt_daxil();
		printf("obyekt1:");
		p1.vaxt_qaytar();
		printf("\nobyekt2:");
		p2.vaxt_qaytar();
		printf("\ncem: ");
		topla(p1, p2);
		return 0;
	}
	
	
	
	
	
	
	
	
	
	
	/*class data{
		int saat, deq;
		
		public:
			void al()
			{
				printf("Saat: ");
				scanf("%d", &saat);
				printf("Deq: ");
				scanf("%d", &deq);
			}
			int saatqaytar(){ return saat;	}
			int deqqaytar(){ return deq; }
	};
	
	void topla(data vaxt1, data vaxt2)
	{
		printf("vaxt1.Saat + vaxt2.Saat = %d\n", vaxt1.saatqaytar() + vaxt2.saatqaytar());
		printf("vaxt1.Deq + vaxt2.Deq = %d", vaxt1.deqqaytar() + vaxt2.deqqaytar());
	}
	
	main()
	{   
		data vaxt1, vaxt2;
		vaxt1.al();
		vaxt2.al();
		topla(vaxt1, vaxt2);
		
		return 0;
	}*/







/*int a = printf("hello"), b;
	printf("%d", a);*/	
	/*b = printf("fe%nrid", &a);pp
	printf("\n%d\n%d", a, b);*/
	//printf(2+"ferid");*/
	
	/*for(a = 3, b = 5; a < 5, b > 1; a++, b--)
	printf("%d %3d\n", a, b);
	perror("salam");*/
