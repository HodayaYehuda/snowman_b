#include <iostream>
#include <string>
#include <array>
#include "snowman.hpp"
using namespace std;
const int TEN = 10, H = 10000000, L=100000 , N=1000000 , R = 10000 , Y = 100 , X=1000 , ARRSIZE = 5 , HANDUPINDEX = 2 , INPUTSIZE = 8;


namespace ariel{
string snowman(int num)
{


int tempnum = num;
int x = 0;
int count = 0;
while (tempnum>0){
x = tempnum%TEN;
count++;
tempnum/=TEN;
if (x > 4 || x < 1) {throw std::invalid_argument("invalid digit!");}
}
if (count != INPUTSIZE){ throw std::invalid_argument("invalid input!");}




//HNLRXYTB
string ans;

ans += " ";
ans+=hat(num/H);


if ((num/X)%TEN == HANDUPINDEX){
    ans+=left_hand(HANDUPINDEX);
}
else{
ans += " ";}



ans+="(";
ans+= left_eye((num/L)%TEN);
ans+=nose((num/N)%TEN);
ans+=right_eye((num/R)%TEN);
ans+=")";


if ((num/Y)%TEN == HANDUPINDEX){
    ans+=right_hand(HANDUPINDEX);
}

else{
ans += " ";}

ans += "\n";

if ((num/X)%TEN != HANDUPINDEX){
    ans+=left_hand((num/X)%TEN);
}

ans += body1((num/TEN)%TEN);

if ((num/Y)%TEN != HANDUPINDEX){
    ans+=right_hand((num/Y)%TEN);
}
else{
ans+=" ";
}

ans += "\n ";
ans+=body2(num%TEN);

 return ans;
}

//H
string hat(int num){
array<string,ARRSIZE> a = {" ","     \n _===_\n", " ___\n .....\n", "  _ \n  /_\\\n", " ___\n (_*_)\n"};
return a.at(num);
}

//N
string nose(int num){
array<string,ARRSIZE> a ={" ",",",".","_"," "};
return a.at(num);
}

//L
string left_eye(int num){
array<string,ARRSIZE> a ={" ",".","o","O","-"};
return a.at(num);
}

//R
string right_eye(int num){
array<string,ARRSIZE> a ={" ",".","o","O","-"};
return a.at(num);
}

//X
// 2 is up
string left_hand(int num){
array<string,ARRSIZE> a ={" ","<","\\","/"," "};
return a.at(num);
}

//Y
// 2 is up
string right_hand(int num){
array<string,ARRSIZE> a ={" ",">","/","\\"," "};
return a.at(num);
}

//T
string body1(int num){
array<string,ARRSIZE> a ={" ","( : )","(] [)","(> <)","(   )"};
return a.at(num);
}

//B
string body2(int num){
array<string,ARRSIZE> a ={" ","( : )","(\" \")","(___)","(   )"};
return a.at(num);
}


}
