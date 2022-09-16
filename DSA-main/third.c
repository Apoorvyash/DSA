#include <stdio.h>


int rectanglePerimeter(int h, int w)
{
    
    int p =(2*h)+(2*w);
    return p;
}

int rectangleArea(int h, int w)
{
    int a = h * w;
        return a;   
}

int main()
{
    int h, w, perimeter, area;
    printf("Tell me the height and width of the rectangle\n");

    scanf("%i", h);
    scanf("%i", w);
    
    perimeter = rectanglePerimeter(h, w);

    area = rectangleArea(h, w);

    printf("Perimeter of the rectangle = %i inches", perimeter);

    printf("Area of the rectangle = %i square inches", area);
    
    return 0;
}