// Take input to the user x1, x2, y1, y2;
// Make function take arguments of points and function;

#include <stdio.h>
#include <math.h>

// Find distance usuing euclidian distance;
float eucDistance(int x1, int y1, int x2, int y2) {
    float distance;

    // Finding Euclidian distance here;
    distance = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));
    return distance;
}

// Make it callback function of area of the circle;
float areaCircle(int x1, int y1, int x2, int y2, float (*cptr) (int, int, int, int)) {
    float radius, area;
    radius = cptr (x1, y1, x2, y2);
    area = 3.14 * pow(radius, 2);  // call the function pointer;

    // printf("%d", area);
    return area;
}

int main (){
    int x1, x2, y1, y2;
    int distance;
    float area;

    printf("\nEnter X-axis points initial and final: ");
    scanf("%d %d", &x1, &x2);

    printf("\nEnter Y-axis points initial and final: ");
    scanf("%d %d", &y1, &y2);

    // Generate function pointer of finding distance;
    float (*cptr) (int, int, int, int);
    cptr = &eucDistance;
    area = areaCircle(x1, y1, x2, y2, cptr);  // call the callback function;
    printf("\nArea of the Circle is %f", area);
    
    return 0;
}