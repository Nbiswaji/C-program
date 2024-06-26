#include<stdio.h>
struct item{
  int v; // value
  int w; // weight
};
struct item I[50];
float v_w[50];  // value per weight
float x[50];    // value per weight
void fractional_knapsack(){
  int i, j, max, tmp, weight=0;
  float temp;
  for(i=1;i<=I[0].v;i++)
  {
    v_w[i] = (float)I[i].v / I[i].w;
  }
    for(i=1;i<I[0].v;i++)
    {
        max = 1;
        for(j=i+1;j<=I[0].v;j++)
        {
            if(v_w[j] > v_w[max])
                max = j;
        }
        if (v_w[max]!=i)
        {
            temp=v_w[max];       // swap for value per weight
            v_w[max]=v_w[i];     // .
            v_w[i]=temp;         // .
            tmp=I[max].v;        // swap for values in item
            I[max].v=I[i].v;     // .
            I[i].v=tmp;          // .
            tmp=I[max].w;        // swap for weight in items
            I[max].w=I[i].w;     // .
            I[i].w=tmp;          // .
        }
    }
  for(i=1;i<=I[i].v;i++)
  {
    x[i]=0;
  }
  i=1;
  while(weight + I[i].w <= I[0].w)
  {
    x[i]=1;
    weight = weight + I[i].w;
    i++;
  }
  x[i] = (float)(I[0].w - weight)/I[i].w;
  x[0]=i;
}
void main(){
  int i;
  printf("Please enter the no of items : ");
  scanf("%d",&I[0].v);
  printf("Please enter the value and weight of all the items as per their number :- \n");
  for(i=1;i<=I[0].v;i++){
    printf("item %d : ", i);
    scanf("%d %d", &I[i].v, &I[i].w);
  }
  printf("\nPlease enter the maximum weight of the sack : ");
  scanf("%d", &I[0].w);
  fractional_knapsack();
  printf("So your solution for max %d weight is :- \n  item :      ", I[0].w);
  for(i=1;i<=I[0].v;i++){
    printf("%d  ",i);
  }
  printf("\n  value :      ");
  for(i=1;i<=I[0].v;i++){
    printf("%d  ",I[i].v);
  }
  printf("\n   weight :     ");
  for(i=1;i<=I[0].v;i++){
    printf("%d  ",I[i].w);
  }
  printf("\n  value per weight  :   ");
  for(i=1;i<=I[0].v;i++){
    printf("%.2f  ",v_w[i]);
  }
  printf("\n   solution :     ");
  for(i=1;i<=I[0].v;i++){
    printf("%.4f  ",x[i]);
  }
}