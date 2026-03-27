#include<stdio.h>


//userdefined data type
enum Default_Day {Mon, Tues, Wed, Thrus, Fri, Satur, Sun}; //0,1,2
enum Spl_Day {Mond=10, Tuesd, Wedd, Thrusd, Frid, Saturd, Sund};
enum Custom_Day {Monday = 22, Tuesday=33, Wedensday= 44};

void main(){
    enum Default_Day today = Fri;
    printf("today in number - %d\n", today);
    enum Spl_Day tommorow = Frid;
    printf("tommorow in number - %d\n", tommorow);
    enum Custom_Day d_tommorow = Wedensday;
    printf("d after tommorow in number - %d\n", d_tommorow);
}