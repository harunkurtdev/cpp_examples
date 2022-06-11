#include <iostream>



int deleteRepeats(char *array,int size){
	int i,j;
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(array[i]==array[j]){
				array[j]=array[j+1];
                size--;
			}
		}
	}
    array[size]='0';
	

	return *array;
	
	
}

int main(){
	int i, size=4;
	char a[10];
a[0] = 'a';
a[1] = 'b';
a[2] = 'a';
a[3] = 'c';

	deleteRepeats(a,size);
	
	for(i=0;i<size;i++){
		// printf("%c\n",a[i]);
        std::cout << a[i] << '\n';
	}
	
	return 0;
}
