#include <stdio.h>
#include <string.h>
#include <math.h>

//main struct for all users
struct user_t{
    char name [255];
    double lon, lat, alt, time;
};

//relative position struct
struct relpos{
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
void storeNameDistance(struct user_t a, struct user_t * b, struct relpos * x, int num){
    int i;
    for(i=0;i<num;i++){
        strcpy(x[i].name, b[i].name);
        x[i].distance = distance(a, b[i]);
    }
}
int minElement(struct relpos * a, int num){
    struct relpos b;
    b.distance = a[0].distance;
    int element;
    for(int i=0; i<num; i++){
        if(b.distance > a[i].distance){
            b.distance = a[i].distance;
            element = i;
        }
    }
    return element;
}
/*void nearestUser(struct user_t * a, struct relpos * b, int num){
    int x = minElement(b, num);
    printf("Closest user is %s at coordinates (%lf, %lf, %lf).", a[x].name, a[x].lon, a[x].lat, a[x].alt );
}*/
struct user_t nearestUser(struct user_t * a, struct relpos * b, int num){
    int x = minElement(b, num);
    struct user_t n = a[x];
    return n;
}
void main(){
    int num, min;

    printf("Enter number of users:\n");

    scanf("%d", &num);

    struct user_t our_user, other_users[num];

    struct relpos storage[num], closestUser;

    fullscan(&our_user, other_users, num);

    storeNameDistance(our_user, other_users, storage, num);

    struct user_t near = nearestUser(other_users, storage, num);

    printf("Nearest user is %s\n", near.name);
    printf("Their position coordinates are :(%lf, %lf, %lf)", near.lon, near.lat, near.alt);


}