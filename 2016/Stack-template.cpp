#include <stdio.h>
#include <cstring>
template <class T>
class stack{
	T *stck, *t;
	int i;
	public:
		stack(){ i = 0; stck = new T;}
		void push(T x){
			t = new T[i + 1];
			memcpy(t, stck, i * sizeof(T));
			t[i] = x;
			stck = new T[i + 1];
			memcpy(stck, t, sizeof(T) * (i + 1));
			delete[] t;
			i++;
		}
		T pop()
		{
			i--;
			if(i < 0)
			{
				printf("Stack is empty!\n");
				i = 0;
				return NULL;
			}
			return stck[i];
		}
};


int main() {
	stack <int> ob;
	
		
	return 0;
}
