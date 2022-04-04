#include <stdio.h> 

int width;          
int height;    
int area;               

int main() {
	

	printf("introce the value width\n");
	scanf("%d", &width);
	
	printf("introce the value height\n");
	scanf("%d", &height);

	area = width * height;

	printf("Area of the rectangle = %d area square cm\n", area);

	if (width == height){
		printf("la figura es un cuadrado");
	};
	

return(0);
}
