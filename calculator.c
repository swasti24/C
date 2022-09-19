#include<stdio.h>
main()
{
    int y;
      do
      {
                  int a,b,result;
              int x;

             printf("Press 1 for addition.\n");
             printf("Press 2 for sub.\n");
             printf("Press 3 for multi.\n");
             printf("Press 4 for div.\n");
             printf("Press 5 for to find number is odd or even \n");
             printf("Press 6 for to square of number\n");
             printf("Press 7 for to find cube of number \n");
             printf("Please enter your choice:");
              fflush(stdin);
            scanf("%d",&x);
            switch(x)
                {
                    case 1: printf("enter two number: \n");
                            scanf("%d%d",&a,&b);
                            printf("a= %d b= %d\n",a,b);
                                    result= a+b;
                                    printf("add of two number: %d\n",result);
                                    break;
                    case 2:  printf("enter two number: \n");
                             scanf("%d%d",&a,&b);
                             printf("a= %d b= %d\n",a,b);
                                result= a-b;
                                    printf("sub of two number: %d\n",result);
                                    break;
                    case 3:printf("enter two number: \n");
                            scanf("%d%d",&a,&b);
                            printf("a= %d b= %d\n",a,b);
                               result= a*b;
                                printf("multi of two number: %d\n",result);
                                break;
                    case 4:  printf("enter two number: \n");
                             scanf("%d%d",&a,&b);
                             printf("a= %d b= %d\n",a,b);
                              result= a/b;
                                    printf("div of two number: %d\n",result);
                                    break;
                    case 5:  printf("enter one number: \n");
                            scanf("%d",&a);
                            printf("a= %d\n",a);
                              if(a%2==0)
                                    {
                                        printf("the number is even\n");

                                    }
                              else
                                    {
                                        printf("the number is odd\n");

                                    }
                                    break;
                    case 6: printf("enter one number: \n");
                            scanf("%d",&a);
                            printf("a= %d\n",a);
                             result= a*a;
                                    printf("square of number: %d\n",result);
                                    break;
                    case 7:  printf("enter one number: \n");
                            scanf("%d",&a);
                            printf("a= %d\n",a);
                            result= a*a*a;
                                    printf("cube of number: %d\n",result);
                                    break;

                     default: printf("wrong input.\n");
            }
            printf("do you want to run it again if yes then press 1 :\n");
            scanf("%d",&y);
      }while(y==1);
}
