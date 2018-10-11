#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main ()
{
    int array [1000];
    int sum = 0;
    for(int i = 0; i < 1000; i++)
        array[i] = i;
    int cpid = fork();
    if(cpid == 0){
        for(int i = 0; i < 100; i++)
            sum = sum + array[i];
        //return sum;
    }
    else{
        int cpid2 = fork();
        if(cpid2 == 0){
            for(int i = 100; i < 199; i++)
                sum = sum + array[i];
            //return sum;
        }
        else{
            int cpid3 = fork();
            if(cpid3 == 0){
               for(int i = 200; i < 299; i++)
                    sum = sum + array[i];
                //return sum;
            }
            else{
                int cpid4 = fork();
                if(cpid4 == 0){
                    for(int i = 300; i < 399; i++)
                        sum = sum + array[i];
                    //return sum;
                }
                else{
                    int cpid5 = fork();
                    if(cpid5 == 0){
                        for(int i = 400; i < 499; i++)
                            sum = sum + array[i];
                        //return sum;
                    }
                    else{
                        int cpid6 = fork();
                        if(cpid6 == 0){
                            for(int i = 500; i < 599; i++)
                                 sum = sum + array[i];
                            //return sum;
                        }
                        else{
                            int cpid7 = fork();
                            if(cpid7 == 0){
                            for(int i = 600; i < 699; i++)
                                sum = sum + array[i];
                            //return sum;
                            }
                            else{
                                int cpid8 = fork();
                                if(cpid8 == 0){
                                for(int i = 700; i < 799; i++)
                                    sum = sum + array[i];
                                //return sum;
                                }
                                else{
                                    int cpid9 = fork();
                                    if(cpid9 == 0){
                                    for(int i = 800; i < 899; i++)
                                        sum = sum + array[i];
                                    //return sum;
                                    }
                                    else{
                                        int cpid10 = fork();
                                        if(cpid10 == 0){
                                        for(int i = 900; i < 999; i++)
                                            sum = sum + array[i];
                                        //return sum;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }

        }
    }
    printf("sum of 1000 numbers is: %d",sum);
  return 0;
}
