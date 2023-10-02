#include<stdio.h>
#include<string.h>
struct poly{
    int coeff;
    int exp;
}p1[100],p2[100],p3[100];
 int readpoly(struct poly []);
 int addpoly( struct poly[], struct poly[],int,int, struct poly[]);
 void displaypoly(struct poly[],int);
 void main(){
    int t1,t2,t3;
    t1=readpoly(p1);
    printf("the first polynomial");
    displaypoly(p1,t1);
      


      t2=readpoly(p2);
      printf("the second  polynomail");
      displaypoly(p2,t2);


      t3=addpoly(p1,p2,t1,t2,p3);
      printf("the resultant polynomial");
      displaypoly(p3,t3);

 }

         int readpoly(struct poly p[10]){
            int t,i;
            printf("enterr the size of hte polynomial");
            scanf("%d",&t);
            for ( i = 0; i < t; i++)
            {

                printf("enter the coeff of %d",i+1);
                scanf("%d",&p[i].coeff);
                printf("enter the exp of %d",i+1);
                scanf("%d",&p[i].exp);



                
            }
            
         }
            void displaypoly(struct poly p[10],int t){
                int i,k;

                for ( i = 0; i < t-1; i++)
                {
                   printf("%d(x)^%d+",p[i].coeff,p[i].exp); 
                }
                printf("%d(x)^%d",p[t-1].coeff,p[t-1].exp);
             }
int addpoly(struct poly p1[10],struct poly p2[10],int t1,int t2,struct poly p3[10]){



    int i=0,j=0,k=0;

    while (i<t1&&j<t2)
    {
       if (p1[i].exp==p2[j].exp)
       {
                  p3[k].coeff=p1[i].coeff+p2[j].coeff;

                  p3[k].exp=p1[i].exp;

                  i++,j++,k++;
       }

       else if(p1[i].exp>p2[j].exp){


        p3[k].coeff=p1[i].coeff;
        p3[k].exp=p1[i].exp;
        i++;
        k++;
       }

       else{
        p3[k].coeff=p2[j].coeff;
        p3[k].exp=p2[j].exp;
        j++;
        k++;

       }
       
    }

    while(i<t1){
        p3[k].coeff=p1[i].coeff;
        p3[k].exp=p1[i].exp;
        i++;
        k++;
    }
     while(j<t1){
        p3[k].coeff=p1[j].coeff;
        p3[k].exp=p1[j].exp;
        j++;
    
    k++;
    }
return k;
}




