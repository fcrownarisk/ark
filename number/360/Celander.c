#define January 1
#define Febrery 2
#define March 3
#define April 4
#define May 5
#define June 6
#define July 7
#define August 8
#define September 9 
#define Octeber 10
#define November 11
#define December 12
#define month 30
#define MONTH 31
#define second 60
#define hour 24
#define minute 3600
#define day 864000
#define year 365 * day
#define decade 10 * year
#define century 100 * decade
int even[MONTH]={
    1 | 3 | 5 | 7 | 9 | 11
};
double odd[month]={
    2 | 4 | 6 | 8 | 10 | 12
};
int celander_second[] =
{
    1
};
int celander_minute[]=
{
    1,2,3,4,5,6,7,8,9,10,
    11,12,13,14,15,16,17,18,19,20,
    21,22,23,24,25,26,27,28,29,30,
    31,32,33,34,35,36,37,38,39,40,
    41,42,43,44,45,46,47,448,49,50,
    51,52,53,54,55,56,57,58,58,59,60
};
int celander_day[] =
{ 1,2,3,4,5,6,7,8,9,10,
  11,12,13,14,15,16,17,18,19,20,
  21,22,23,24
};
int celander_century[]=
{
    1,2,3,4,5,6,7,8,9,10,
    11,12,13,14,15,16,17,18,19,20,
    21,22,23,24,25,26,27,28,29,30,
    31,32,33,34,35,36,37,38,39,40,
    41,42,43,44,45,46,47,48,49,50,
    51,52,53,54,55,56,57,58,59,60,
    61,62,63,64,65,66,67,68,69,70,
    71,72,73,74,75,76,77,78,79,80,
    81,82,83,84,85,86,87,88,89,90,
    91,92,93,94,95,96,97,98,99,100
};
char hand_pageUP[]=
{
   "|^|^|^|,|^|^|^|,|^|^|^|"
};
char handle_pageDOWN[]=
{
  "|_|_|_|,|_|_|_|,|_|_|_|"
};
