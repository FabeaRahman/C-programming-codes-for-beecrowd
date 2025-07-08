
# include <stdio.h>
int main()
{
    double R;
    const double pi=3.14159;
    scanf("%lf",&R);
    ///volume of the sphere
    double volume =(4.0/3)*pi*R*R*R;
    printf("VOLUME = %.3lf\n",volume);
    return 0;
}
