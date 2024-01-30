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
void fullscan(struct user_t * a, struct user_t * b, int num){
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
//stores an "other user"'s name and distance away from our user inside an array of structures
void storeNameDistance(struct user_t a, struct user_t * b, struct name_distance * x, int num){
    int i;
    for(i=0;i<num;i++){
        strcpy(x[i].name, b[i].name);
        x[i].distance = distance(a, b[i]);
    }
}
//function that returns the smallest element in an array
int minElement(struct name_distance * const a, int num){
    int i, min;
    double x = a[0].distance;
    for(i=1;i<num;i++){
        if(x > a[i].distance){
            x = a[i].distance;
            min = i;
        }
        else{
            continue;
        }
    }
    return min;
}

void main(){
    int num, min;
    struct user_t our_user, other_users[num];
    struct name_distance storage[num];

    printf("Enter the number of users you wish to input data for:\n");

    scanf("%d", &num);

    fullscan(&our_user, other_users, num);

    storeNameDistance(our_user, other_users, storage, num);


    for(int i = 0; i < num; i++){
        printf("Position coordinates of User #%d are (%lf, %lf, %lf)\n", i + 1, other_users[i].lon, other_users[i].lat, other_users[i].alt);
    }
    for(int j = 0; j < num; j++){
        printf("Distance between %s and %s is %lf\n",our_user.name, storage[j].name, storage[j].distance );
    }
    
}