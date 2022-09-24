#include <stdio.h>
union length_fi
{
    int feet;
    int inch;
};
union length_mcm
{
    int m;
    int cm;
};
union length_mcm change(union length_fi *len_obj)
{
    union length_mcm test_obj;
    int centi, meter; // centimeters = ( total inches ) * 2.54
    centi = ((len_obj->feet * 12) + len_obj->inch) * 2.54;
    meter = (centi / 100);
    centi = centi - (meter * 100);
    printf("\n Before commiting to union:- \n  m: %d \t cm: %d", meter, centi);
    test_obj.m = meter, test_obj.cm = centi;
    printf("\n After commiting to union:- \n  m: %d \t cm: %d", test_obj.m, test_obj.cm);
    return test_obj;
}
int main()
{
    printf("\n\n\n");
    union length_fi old_len;
    union length_mcm new_len;
    printf("\nEnter the length in feet inch:- \n");
    printf(" Feet: ");
    scanf("%d", &old_len.feet);
    printf(" Inches: ");
    scanf("%d", &old_len.inch);
    printf("\n Feet: %d \t Inch: %d\n", old_len.feet, old_len.inch);
    new_len = change(&old_len); // conversion from feet-inch to m-cm
    printf("\n\n New Length:- ");
    printf("\n  Meters: %d", new_len.m);
    printf("\n  Centimeters: %d", new_len.cm);
    printf("\n\n\n");
    return 0;
}