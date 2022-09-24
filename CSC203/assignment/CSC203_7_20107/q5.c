#include <stdio.h>
struct length_fi
{
    int feet;
    float inch;
};
struct length_mcm
{
    int m;
    float cm;
};
struct length_mcm change(struct length_fi *len_obj)
{
    struct length_mcm test_obj;
    float centi;
    int meter;
    // centimeters = ( total inches ) * 2.54
    centi = ((len_obj->feet * 12) + len_obj->inch) * 2.54;
    meter = (centi / 100);
    centi = centi - (meter * 100);
    test_obj.cm = centi;
    test_obj.m = meter;
    return test_obj;
}
int main()
{
    printf("\n\n\n");
    struct length_fi old_len;
    struct length_mcm new_len;
    printf("\nEnter the length in feet inch:- \n");
    printf(" Feet: ");
    scanf("%d", &old_len.feet);
    printf(" Inches: ");
    scanf("%f", &old_len.inch);
    new_len = change(&old_len); // conversion from feet-inch to m-cm
    printf("\nNew Length:- ");
    printf("\n Meters: %d", new_len.m);
    printf("\n Centimeters: %f", new_len.cm);
    printf("\n\n\n");
    return 0;
}