#include <stdio.h>
struct Student {
    int age;
    char name[20];
    double grade;
};
int main() {
    struct Student arr[20];
    printf("write student data\n");
    for (int i = 0; i < 20; i++) {
        printf("Student #%d\n", i + 1);
        printf("Age: ");
        scanf("%d", &arr[i].age);
        printf("Name: ");
        scanf("%s", arr[i].name);
        printf("Grade: ");
        scanf("%lf", &arr[i].grade);
        printf("\n");
    }/*
    printf("Students Date\n");
    for (int i = 0; i < 3; i++) {
        printf("Student #%d\n", i + 1);
        printf("Age: %d\n", arr[i].age);
        printf("Name: %s\n", arr[i].name);
        printf("Grade: %.lf\n", arr[i].grade);
        printf("\n");
    }*/
double max[0];
for (int i=0; i <20;++i){
if (arr[i].grade > max[0]) {
max[0] = arr[i].grade;
}
}
printf("the highest socer  %.2lf/n", max[0]);
return 0;
}
