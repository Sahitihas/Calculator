#include <stdio.h>     //Student Record System
  struct student { 
      char name[20]; 
      char dept[20]; 
      char specialization[20]; 
      int regno;
      int aadharnumber;
      char Fathername[50] ;
      char Mothername[60];
      char FatherOccupation[70];
      char MotherOccupation[70];
      char permanentaddress[40];
  }; 
      int main() { 
          struct student a; 
          printf(" Enter Records :\n "); 
          printf("------------\n"); 
          printf(" Enter Name : "); 
          scanf("%s",a.name); 
          printf("Enter Department : ") ; 
          scanf("%s", a.dept) ; 
          printf("Enter Specialization: ") ; 
          scanf("%s", a.specialization) ; 
          printf("Enter Registration No : ") ; 
          scanf("%d", &a.regno);
          printf("Enter Aadhar No : ") ; 
          scanf("%d", &a.aadharnumber);
          printf("Enter Father's Name :\t ") ; 
          scanf("%s", &a.Fathername);
          printf("Enter Mother's Name :\t ") ; 
          scanf("%s", &a.Mothername);
          printf("Enter Father's Occupation :\t ") ; 
          scanf("%s", &a.FatherOccupation);
          printf("Enter Mother's Occuaption :\t ") ; 
          scanf("%s", &a.MotherOccupation);
          printf("Enter Permanent Address:\t ") ; 
          scanf("%s", &a.permanentaddress);
          printf("-----------------") ; 
          printf("Student Records:\n----------\n") ; 
          printf("Name :%s\n",a.name) ; 
          printf(" Department :%s\n", a.dept); 
          printf("Specialization :%s\n", a.specialization);
          printf("Aadhar No : %d\n", a.aadharnumber);
          printf("Father's Name : %s\n", a.Fathername);
          printf("Mother's Name : %s\n", a.Mothername);
          printf("Father's Ocuupation : %s\n", a.FatherOccupation);
          printf("Mother's Occupation : %s\n", a.MotherOccupation);
          printf("Permanent Address : %s\n", a.permanentaddress);
          
          
          return 0; }