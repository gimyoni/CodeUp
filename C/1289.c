#include <stdio.h>

int main() {
    int h, w, a_area, b_area, c_area;
    
    scanf("%d %d", &h, &w);
    a_area = h*w;
    scanf("%d %d", &h, &w);
    b_area = h*w;
    scanf("%d %d", &h, &w);
    c_area = h*w;
    
    if(a_area>b_area && a_area>c_area){
        printf("%d", a_area);
    }else if(b_area>a_area && b_area>c_area){
        printf("%d", b_area);
    }else{
        printf("%d",c_area);
    }
    
    
    return 0;
}
  
