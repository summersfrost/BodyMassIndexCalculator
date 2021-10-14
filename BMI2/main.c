/* BMI CALCULATOR
Submitted by: Benjie S. Juabot
Submitted to: Engr Victor John L Anunciado
In Completion of Midterms Project

Logic and Concept used:

So the goal here is to find the bmi of a person
in order to attain the goal here is what I do
So I used for Loops in order to not terminate the codes while the user is using it
this will allow that only the user can stop the program.
If else conditioning is also used for the the bmi category
Switch case is used in the choosing of formula because if else is kinda complicated for me because it will be sort of messy
So the program flows like loop switch(for the calcu) then loop inside the case after the completion and execution of the main program
this is for the asking to continue or not. so this loop contains another switch for continuation and once answered it will either loop
back to start or terminate or loop again because of not following instructions.

the Formatting out gives me some time figuring out coz I always forgot it XD.
 So the main problem I encoutered here is for the loop to work since I cant end the loop or the loop isnt giving me the right output
it gives me the diiferent case or default and it just goes anywhere like oh Goodness what on earth is happening here. but yah after alloting time
I just figured it out (Feeling Thankful). also I cant apply the Oop concept I dont how to shorten the main argument
 where supposedly calling the class to fill what to do in the main will be cleaner. (P.S I forgot about that so NVM)
since majority of the flow is the same either and it just vary on the labels for what kind of measurement to input thats why I think classes suits the job.

Dont worry bout this comment I will just read it during my video presentation and discussions of whats happening here XD
I have anxiety explaining so better read on what will I explain */



#include <stdio.h> //header file
#include <stdlib.h>

int main()
{
float Pound; //Weight in Pounds
float Inches; // Height in Inches
float Kilograms; //Weight in Kilograms
float Meters; // Height In Meters
float Result; // The computation of the formula
int Repeat;//loop for calcu
int Choice;// Kind of measurement
int Invalid;//loop for the confirmation

int Confirm; //Confirm want to use again

printf("BMI CALCULATOR\n");
  printf("**************************************************************************************\n");
for(Repeat=1;Repeat>=1;){ //this will loop the code depending on the user

    printf("What measurement do you want to use?\n"); //choice of formula and measures being used
    printf("Submit 1 if you want to use Pounds and Inches\n");
    printf("Submit 2 if you want to use Kilograms and Meters\n");// 1 and 2 because the variable used in switch is 1 and 2
    printf("Your Choice: ");  scanf("%d",&Choice);
      printf("**************************************************************************************\n");
    switch(Choice){ //instead of if else switch is better in choosing the formula
    case 1:
    printf("Enter your height in Inches: \n"); //input height
    printf("Your Height:"); scanf("%5f",&Inches);
      printf("\nEnter your weight in lbs: \n"); //input weight
    printf("Your Weight: "); scanf("%5f",&Pound);
  printf("\nRESULTS:\n");
    printf("Your Height is: %.2fin.\n",Inches); //display your height weight and bmi
      printf("Your Weight is: %.2flbs.\n",Pound);
    Result=(Pound/Inches/Inches) * 703; //formula to get the bmi
    printf("Your BMI is: %.2f\n",Result);
printf("BMI CATEGORY RESULT:"); //Conditioning for the category like what condition does the bmi meets
    if(Result<18.5){
    printf("You are Underweight\n");
      printf("**************************************************************************************\n");}
    else if(Result>=18.5&&Result<=24.9){
    printf("You are Normal\n");
      printf("**************************************************************************************\n");}
    else if(Result>=25&&Result<=29.9){
    printf("You are Overweight\n");
      printf("**************************************************************************************\n");}
    else{
    printf("You are Obese\n");
      printf("**************************************************************************************\n");}

        for(Invalid=1;Invalid>0;){ //initializaation for the repeat of process/ loop will occur if the cases doesnt meet

        printf("Do you want to Use The Calculator Again?\n");
        printf("Enter 1 if your answer is Yes and 2 for No\n");
        printf("Your Choice: ");scanf("%d",&Confirm);
            switch(Confirm) {
                case 1:
                    printf("**************************************************************************************\n");
                    Invalid-=1; //this will stop the loop from running since the loop only runs if invalid is greater than 0 and goes back to calculator

             break; //this will be stopped when meet in order not to proceed to case 2

                case 2: //this will stop the program from running since the choice 1 is to continue and 2 is to stop the program
                printf("Thank You For Using!\n");
                  printf("**************************************************************************************\n");
                return 0; //terminates the program
                break;//Its not necessary to since its terminated but just for uniformality
            default:
                printf("Enter 1 and 2 only!\n"); //The user doesnt input the system value that is assigned so the loop for asking to continue or not will continue
                  printf("**************************************************************************************\n");
                break; //not necessary  but just to avoid my debugging issues XD
             }
             }
             break; //this will prevent case 1 from running the case even the conditions are met
    //*****************************************************************************************//
    case 2: //same concept of case 1 but the only thing that differs is the labels and the formula
    printf("\nEnter your weight in kg: \n");
    printf("Your Weight: "); scanf("%5f",&Kilograms);
    printf("Enter your height in Meters: \n");
    printf("Your Height:"); scanf("%5f",&Meters);

    Result=Kilograms/Meters/Meters; //this is the diferent part since the formula is kg/m^2 the succeding part is the same
      printf("\nRESULTS:\n"); // This can be shorter if class exist but C isnt OOP so idk how to shorten this so lets take it
    printf("Your Height is: %.2fm. \n",Meters);
    printf("Your Weight is: %.2fkg. \n",Kilograms);
    printf("Your BMI is: %.2f\n",Result);
    printf("BMI CATEGORY RESULT:");
    if(Result<18.5){
    printf("You are Underweight\n");
      printf("**************************************************************************************\n");}

    else if(Result>=18.5&&Result<=24.9){
    printf("You are Normal\n");
      printf("**************************************************************************************\n");}
    else if(Result>=25&&Result<=29.9){
    printf("You are Overweight\n");
      printf("**************************************************************************************\n");;}
    else{
    printf("You are Obese\n");
      printf("**************************************************************************************\n");;}

        for(Invalid=1;Invalid>0;){

        printf("Do you want to Use The Calculator Again?\n");
        printf("Enter 1 if your answer is Yes and 2 for No\n");
        printf("Your Choice: ");scanf("%d",&Confirm);
            switch(Confirm) {
                case 1:
                    printf("**************************************************************************************\n");
                    Invalid-=1;
            break;
                case 2:
                printf("Thank You For Using!\n");
                  printf("**************************************************************************************\n");
                return 0;
                break;
            default:
                printf("Enter 1 and 2 only!\n");
                  printf("**************************************************************************************\n");
                break;
             }

             }break; // So this is the final line of Case 2 in order to continuing reading the default even the conditions are met

               default: //So this will ask what kind of formula to be used again since the user doesnt follow the system requirements.
                printf("Enter 1 and 2 only!\n");
                  printf("**************************************************************************************\n");
                break;

        }
        }
}
