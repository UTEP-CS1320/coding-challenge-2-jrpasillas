/*
*   CODING CHALLENGE #2
*   Filename: main.c
*   This file measures a person's blood pressure readings and reports their category.
*   Last modified by: Angel F. Garcia (9/19/2020)
*   
*   Check the // TODO comments to see what is missing and needs to be completed.
*/

#include <stdio.h>

int main(void) {
  int s, d;

   // Read Systolic and Diastolic pressure
  scanf("%d %d", &s, &d);
  // Systolic pressure must be greater than Diastolic pressure to move on, if not, 'Error' 
  if(s < d)
      printf("Error");
  else {
   // Both Systolic and Diastolic pressure must be in their range in order to be 'Normal' (AND)
  if((s < 120) && (d < 80))
  {
      printf("Normal\n");
  }
  // Both Systolic and Diastolic pressure must be in their range in order to be 'Elevated' (AND)
  if((s >= 120 && s <= 129) && (d < 80))
  {
      printf("Elevated\n");
  }
  // Systolic and Diastolic pressure must be in their own range BUT both (s) and (d) don't have to be true (OR)
  if((s >= 130 && s <= 139) || (d >= 80 && d <= 89)) 
  {   
      printf("Stage 1 Hypertension\n");
  }
  // Systolic and Diastolic pressure must be in their own range BUT both (s) and (d) don't have to be true (OR)
  if((s > 140) || (d > 90)) 
  {
      printf("Stage 2 Hypertension\n"); 
  }
  // Both (s) and (d) must be in their own range and either both could be true or one of them (AND/OR)
  if((s > 180) && (d > 120)) 
  {  
    if((s > 180) || (d > 120))
      printf("Hypertensive Crysis\n");
  }
  
  }

  return 0;
  
}
