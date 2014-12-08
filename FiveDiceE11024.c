/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\                                                           
 * Simple FiveDice game with simple rules   			             *
 *                                                                   *
 *                                                                   *
 * prepared by:                                                      *
 * Supun Athukorala                                                  *
 * E/11/024															 *
 * Department of Computer Engineering                                *
 * Faculty of Engineering											 *
 * University of Peradeniya                                          *
 *                                                                   * 
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */ 


#include <stdio.h>

int main(){
	  int count,count2;  // scalar and you can store 1 integer
	  int input1[5];      // 5 inputs stored in a array
    int result[5] = {};  // repeating table 
    int marks[10] = {};  // score table
    int temp1,pair1,i=3;
    int seq1,seq2 ;  // sequence check
    int max1=0;       // max score


scanf("%d %d %d %d %d",&input1[0],&input1[1],&input1[2],&input1[3],&input1[4]);
for (count = 0; count < 5; ++count)
{
  if (input1[count]<=0 || input1[count]>9)
  {
    printf("wrong number.Do the input again\n");
    return 0;
  }
}

for(count=0;count<5;++count)     // Comparing table
{ 
  for (count2 = 0; count2 < 5; ++count2)
  {
    if (count != count2)
    {
      if ((input1[count]) == (input1[count2]))
      {

      	pair1=input1[count];
        break;
      }
    }
  }
}


for(count=0;count<5;count++)     // sort array according to accending array
{
  for(count2=count+1;count2<5;count2++)
  {
    if(input1[count]>input1[count2])
    {
       temp1=input1[count];
       input1[count]=input1[count2];
       input1[count2]=temp1;
    }
  }
} 
 
   

for(count=0;count<5;++count)     // Comparing table
{ 
  for (count2 = 0; count2 < 5; ++count2)
  {
    if (count != count2)
    {
      if ((input1[count]) == (input1[count2]))
      {

      	result[count]= result[count] +input1[count];
      }
    }
  }
}



// marks/score table 


for (count = 0; count < 5; ++count)    // five's 
 { 
  if ((result[count]/input1[count])==4)
  {   
   marks[0]=17 +5*input1[count];
  }
 }

for (count = 0; count < 5; ++count)    // four's 
 { 
  if ((result[count]/input1[count])==3)
  {   
   marks[1]=16 +4*input1[count];
  }
 }

for (count = 0; count < 5; ++count)    // pairs 
 { 
  if ((result[count]/input1[count])==1)
  {   
   marks[i]=14 +2*input1[count];
   i=4;
  }
 }

if (marks[3]==marks[4])
{
  marks[4]=0;
}

if (marks[4] != 0 ) // two pairs
{
  marks[5]=marks[3] + marks[4] -15;
}


for (count = 0; count < 5; ++count) // any throw
 { 
   marks[7]=marks[7] + input1[count];
 }

for (count = 0; count < 5; ++count)    // three's 
 { 
  if ((result[count]/input1[count])==2)
  {   
   marks[8]=15 +3*input1[count];
  }
 }

if (marks[8] != 0)                        // three's and pair
{
  marks[9]=marks[8] + marks[3] -14;
}

seq1 =1;
for (count = 1; count < 5; count++)    // sequence
{
  if ((input1[count]) ==(input1[count-1]))
 { continue; 
 }
 else  if ((input1[count])==(input1[count-1]+1))
    {
       seq1 = seq1 +1 ;
       seq2 = input1[count];
    }   
  
}

if (seq1==4)           // short sequence
{
  marks[6]=25 +seq2;
}

if (seq1==5)         // long sequence 
{
  marks[2]=37 +seq2;
}

 // maximum mark 
max1=marks[0];
for (count= 1; count < 10; count++)
{
  if (marks[count]>max1)
  {
    max1=marks[count];
  }
}


// final result

 if (max1==marks[0])
{
  printf("fiveDice score is %d: five %d’s\n",marks[0],(marks[0]-17)/5);    //five's
}

else if (max1==marks[1])
{
  printf("fiveDice score is %d: four %d’s\n",marks[1],(marks[1]-16)/4);  //four's
}

else if (max1==marks[2])
{
  printf("fiveDice score is %d: long sequence %d..%d\n",marks[2],seq2-4,seq2);  // long sequence;
}

else if (max1==marks[3])
{
  printf("fiveDice score is %d: pair of %d’s.\n",marks[3],(marks[3]-14)/2 );  // only one pair
}

else if (max1==marks[5])
{
   if(pair1==(marks[4]-14)/2)
     {
      printf("fiveDice score is %d: pair of %d’s and a pair of %d’s\n",marks[5],(marks[3]-14)/2,(marks[4]-14)/2 );  // pair and pair
     }
   else
     {
    printf("fiveDice score is %d: pair of %d’s and a pair of %d’s\n",marks[5],(marks[4]-14)/2,(marks[3]-14)/2 );  // pair and pair
     }
}

else if (max1==marks[6])
{
  printf("fiveDice score is %d: short sequence %d..%d\n",marks[6],seq2-3,seq2 );  // short sequence;
}

else if (max1==marks[7])
{
  printf("fiveDice score is %d: sum.\n",marks[7] );    // any throw sum
}


else if (max1==marks[8])
{
  printf("fiveDice score is %d: three %d’s\n",marks[8],(marks[8]-15)/3); //three's
}


else if (max1==marks[9])
{
  printf("fiveDice score is %d: three %d’s and a pair of %d’s\n",marks[9],((marks[8]-15)/3),((marks[3]-14)/2));  // three's and a pair
}






//printf("\n");


/*


for (count = 0; count < 5; count++){       // progress checking
	
    printf("input1[%d]= %d \t", count,input1[count]);
    printf("result[%d]= %d \n", count,result[count]);
    //printf("repeating sequence[%d]= %d \n",count,result2[count]); 
}
printf("\n");

for (count = 0; count < 10; count++){
  
    printf("marks[%d]= %d \n", count,marks[count]); 
}



*/

  return 0;
}
