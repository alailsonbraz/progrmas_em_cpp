#include <iostream>
using namespace std;

int main(){
	setlocale (LC_CTYPE,"Portuguese");
    int year19[2] = {5, 30}, year20[2]= {10, 35}, year21[2]= {-2, 26};
    
    float media[3];
    
    media[0] = float(year19[0]+year19[1])/2;
    media[1] = float(year20[0]+year20[1])/2;
    media[2] = float(year21[0]+year21[1])/2;
    
    printf("a media da temperatura do ano 2019: %.2f \n", media[0]);
    printf("a media da temperatura do ano 2020: %.2f \n", media[1]);
    printf("a media da temperatura do ano 2020: %.2f \n", media[2]);

    
}
