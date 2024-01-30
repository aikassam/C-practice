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
//function to take one user and assign a name, position coordinate, and a time in nanoseconds with its input from a text file
void scan_user(struct user_t * a){
    printf("Enter the user's name:\n");
    scanf("%s", a->name);
    printf("Enter longitude, latitude, altitude, and time:\n");
    scanf("%lf %lf %lf %lf", &a->lat, &a->lon, &a->alt, &a->time);
}
//function to call scan_user for our user and store information in single struct, then calls scan_user for array of ALL other_users and stores all of their information
void fullscan(struct user_t * a, struct user_t * b, int num){
    printf("For our user:\n");
    scan_user(a);
    for(int i=0; i < num; i++){
        printf("Next user:\n");
        scan_user(&b[i]);
    }
}
//function to take one user and assign a name, position coordinate, and a time in nanoseconds with its input from a text file
void scan_user_file(struct user_t * a, FILE * b){
    fscanf(b, "%s\n", &a->name);
    fscanf(b,"%lf\n", &a->time );
    fscanf(b,"%lf\n", &a->lat );
    fscanf(b,"%lf\n", &a->lon );
    fscanf(b,"%lf\n", &a->alt);
}
//function to call scan_user for our user and store information in single struct, then calls scan_user for array of ALL other_users and stores all of their information
void fullscan_file(struct user_t * a, struct user_t * b, int num, FILE * c){
    scan_user_file(a, c);
    for(int i=0; i < num; i++){
        scan_user_file(&b[i], c);
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
//Finds which element of the relative position array holds the smallest value, and returns the element (but not the value of the element)
int minElement(struct relpos * a, int num){
    struct relpos b;
    b.distance = a[0].distance;
    int element;
    for(int i=0; i<num; i++){
        if(b.distance > a[i].distance){
            b.distance = a[i].distance;
            element = i;
        }if(element >= num){
            element=0;
        }
    }
    return element;
}
//calls the minElement function and uses it to return whichever struct holds the smallest relative distance value
struct user_t nearestUser(struct user_t * a, struct relpos * b, int num){
    int x = minElement(b, num);
    struct user_t n = a[x];
    return n;
}
void main(){
    int num, op;

    printf("Would you like to input information manually or automatically through a text file?\n1. Manual\n2. Automatic\n");

    scanf("%d", &op);

    while(op!=1 && op!=2){
            printf("Invalid input, please try again:\n");
            scanf("%d", &op);
        }
    
    if(op==1){
        printf("Please enter the number of users:\n");

        scanf("%d", &num);

        while(num<=0){
            printf("Invalid input. Please try again:\n");
            scanf("%d", &num);
        }

        struct user_t our_user;

        struct user_t other_users[num];

        fullscan(&our_user, other_users, num);

        struct relpos storage[num];

        for(int i=0; i<num; i++){
            printf("Position coordinates of %s are (%lf, %lf, %lf)\n", other_users[i].name, other_users[i].lat, other_users[i].lon, other_users[i].alt );
        }
        storeNameDistance(our_user, other_users, storage, num);

        for(int j=0;j<num;j++){
            printf("Distance between %s and %s is %lf\n", our_user.name, storage[j].name, storage[j].distance);
        }

        struct user_t closestUser = nearestUser(other_users, storage, num);

        printf("Nearest user to %s is %s with position coordinates of (%lf, %lf, %lf).", our_user.name, closestUser.name, closestUser.lat, closestUser.lon, closestUser.alt);
    }
    else if(op==2){
        char dir[1000];

        printf("Enter the file directory:\n");

        scanf("%s", dir);

        FILE * fpointer = fopen(dir, "r");

        fscanf(fpointer, "%d\n", &num);

        struct user_t our_user, other_users[num];

        struct relpos storage[num];

        fullscan_file(&our_user, other_users, num, fpointer);

        storeNameDistance(our_user, other_users, storage, num);

        struct user_t near = nearestUser(other_users, storage, num);

        for(int i=0; i<num; i++){
            printf("Position coordinates of %s are (%lf, %lf, %lf)\n", other_users[i].name, other_users[i].lat, other_users[i].lon, other_users[i].alt );
        }
        storeNameDistance(our_user, other_users, storage, num);

        for(int j=0;j<num;j++){
            printf("Distance between %s and %s is %lf\n", our_user.name, storage[j].name, storage[j].distance);
        }

        printf("Nearest user to %s is %s with position coordinates of (%lf, %lf, %lf).", our_user.name, near.name, near.lat, near.lon, near.alt);
    }
}