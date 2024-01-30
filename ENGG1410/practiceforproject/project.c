#include <stdio.h>
#include <string.h>
#include <math.h>

//struct that will be used for all users
struct user_t{
    char name [255];
    double lon, lat, alt, time;
};

struct name_distance{
    char name[255];
    double distance;
};

//function to take one user and assign a name, position coordinate, and a time in nanoseconds
void scan_user(struct user_t * a){
    char n[255];
    printf("Enter the user's name:\n");
    scanf("%s", n);
    strcpy(a->name, n);
    double x, y, z, t;
    printf("Enter longitude, latitude, altitude, and time:\n");
    scanf("%lf %lf %lf %lf", &x, &y, &z, &t);
    a->lon = x;
    a->lat = y;
    a->alt = z;
    a->time = t;
}
//function to call scan_user for our user and store information in single struct, then calls scan_user for array of ALL other_users and stores all of their information
void otherusers(struct user_t * a, struct user_t * b, int num){
    printf("For our user:\n");
    scan_user(a);
    printf("Next user:\n");
    for(int i=0; i < num; i++){
        scan_user(&b[i]);
    }
}
//returns the magnitude of the distance between two users
double distance(struct user_t a, struct user_t b){
    return sqrt(pow(b.lon-a.lon,2)+pow(b.lat-a.lat,2)+pow(b.alt-a.alt,2));
}
//assigns distances between our user and each of the other users to elements of an array (in progress)
void storedistances(struct user_t a, struct user_t * b, double *x, int num){
    int i;
    for(i=0;i<num;i++){
        x[i] = distance(a, b[i]);
    }
}
void storeNameDistance(struct user_t a, struct user_t * b, struct name_distance * x, int num){
    int i;
    for(i=0;i<num;i++){
        strcpy(x[i].name, b[i].name);
        x[i].distance = distance(a, b[i]);
    }
}
//main function
void main(){
    
    int numberofusers;
    struct user_t our_user, other_users, auser[numberofusers];
    struct name_distance array[numberofusers];
    double stored_distances[numberofusers];

    printf("Enter the number of users you wish to scan data for:\n");
    scanf("%d", &numberofusers);

    otherusers(&our_user, auser, numberofusers);

    storeNameDistance(our_user, auser, array, numberofusers);

    printf("%lf, %lf, %lf", auser[0].lon, auser[0].lat, auser[0].alt);

    //storedistances(our_user, auser, stored_distances, numberofusers);

    /*for(int i=0; i<numberofusers; i++){
        printf("(%lf, %lf, %lf)\n", auser[i].lon, auser[i].lat, auser[i].alt);
    }
    for(int k=0; k < numberofusers; k++){
        printf("Distance between our user and %s is %lf\n", array[k].name, array[k].distance);
    }
    /*for(int j=0; j<numberofusers; j++){
        printf("Distance of ourUser-User#%d is %lf\n", j+1, stored_distances[j]);
    }*/
}