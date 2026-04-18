#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

int main(){
    /*
    // distance of cooordinate
    float xA, yA, xB, yB, d;
    cout<<"Input enter xA:\n";
    cin>> xA;
    cout<<"Input enter yA:\n";
    cin>> yA;
    cout<<"Input enter xB:\n";
    cin>> xB;
    cout<<"Input enter yB:\n";
    cin>> yB;
    d = sqrt(pow(xB-xA,2)+ pow(yB-yA,2));
    cout<<"Distance for d is\n";
    cout<<d;
    cout<<"\n";
    */


/*
    // Center of the circle
    float xC, yC, xM, yM, R, d1;
    cout<<"Input enter xC:\n";
    cin>>xC;
    cout<<"Input enter yC:\n";
    cin>>yC;
    cout<<"Input enter xM:\n";
    cin>>xM;
    cout<<"Input enter yM:\n";
    cin>>yM;
    cout<<"Input enter R\n";
    cin>>R;
    d1 = sqrt(pow(xM-xC,2) + pow(yM-yC, 2));

    if ((d1 < R) || ((R-d1)>0)){
        cout<<"coordinate of M lying inside the cirle\n";
        cout<<"R is: "<<R;
        cout<<"d1 is: "<<d1;
    }
    else if ((d1 > R) || ((R-d1)<0)){
        cout<<"coordinate of M lying outside the circle\n";
        cout<<"R is: "<<R;
        cout<<"d1 is: "<<d1;
    }
    else{
        cout<<"coordinate of M lying on the circle\n";
        cout<<"R is: "<<R;
        cout<<"d1 is: "<<d1;
    }
        */
/*
    //Integer pair
    int num1, num2, sum1 =0, sum2=0;
    cout<<"Input number one:\n";
    cin>>num1;
    cout<<"Input number two:\n";
    cin>>num2;

    for (int i =1; i < num1; i++){
        if(num1 % i==0){
            sum1 += i;
        }
    }
    for (int i =1; i < num2; i++){
        if (num2 % i ==0){
            sum2 += i;
        }
    }
    cout<<sum1;
    cout<<"\n";
    cout<<sum2;
    cout<<"\n";

    if ((sum1 == num2) and (sum2 == num1)){
        cout<<"Is number friend\n";
        cout<<"YES\n";
    }
    else{
        cout<<"Not number friend\n";
        cout<<"No\n";
    }
        */

    //Exam day, month, year
/*
    int day, month, year, dayofweek =0, a=0, y= 0,m=0;
    string places[7] = {"Sunday", "Monday", "Tuesday", "Webnesday", "Thursday","Friday","Saturday"};
    cout<<"Input enter day:\n";
    cin>>day;
    cout<<"Input enter month:\n";
    cin>>month;
    cout<<"Input enter year:\n";
    cin>>year;
    if (month > 12 and month ==0) return;
    if (day > 33 and day ==0) return;
    if (year == 0) return;

    if (((year % 4 ==0) and (year % 100==0)) || (year % 400 ==0)){
        cout<<"Is leap year\n";
        cout<<year;
        cout<<"\n";
    }
    else{
        cout<<"not leap year";
    }
    a = (14 - month)/12;
    y = year - a;
    m = month + 12*a -2;
    dayofweek = (day + y + y /4 - y /100 + y /400 + (31 * m)/12) %7;
    for (int i =dayofweek; ; ){
        cout<<places[i];
        break;
    }
    */

    //calculate the time used
    int h1 =0, h2=0, m1=0, m2=0, s1=0, s2=0, used_time_h=0, used_time_m=0, used_time_s=0;
    cout<<"Input time hour one:\n";
    cin>>h1;
    cout<<"Input time minute one:\n";
    cin>>m1;
    cout<<"Input time second one:\n";
    cin>>s1;
    cout<<"Input time hour two:\n";
    cin>>h2;
    cout<<"Input time minute two:\n";
    cin>>m2;
    cout<<"Input time second two:\n";
    cin>>s2;
    if ( h1 > h2 ){
        cout<<"You enter again";
        return 0;
    }
    used_time_h = h2 - h1;
    if (m1 > 60 and m2 > 60){
        cout<<"does not exist";
        return 0;
    }
    used_time_m = abs(m2 - m1);
    if (s1 > 60 and s2 > 60){
        cout<<"does not exist";
        return 0;
    }
    used_time_s = abs(s2 - s1);
    cout<<"Hour used: "<<used_time_h <<" Minute used: "<<used_time_m<<" Second used: "<<used_time_s<<"\n";




    
    
    
    return 0;

}