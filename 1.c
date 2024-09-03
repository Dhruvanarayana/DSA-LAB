#include<stdio.h>
#include<stdlib.h>
struct Day
{
char*dayname;
int date;
char*activitydescription;
};
struct Day*createday()
{
struct Day*newday=(struct Day*)malloc(sizeof(struct Day));
newday->dayname=(char*)malloc(sizeof(char));
newday->activitydescription=(char*)malloc(sizeof(char));
printf("Enter the day name:");
scanf("%s",newday->dayname);
printf("Enter date:");
scanf("%d",&(newday->date));
printf("Enter activity description:");
scanf(" %[^\n]",newday->activitydescription);
return newday;
}
void read(struct Day* calendar[],int size)
{
for(int i=0;i<size;i++)
{
printf("Enter details for day %d:\n",i+1);
calendar[i]=createday();
}
}

void display(struct Day* calendar[],int size)
{
printf("\nWeek's Activity Details:\n");
for(int i=0;i<size;i++)
{
printf("Day %d:\n",i+1);
printf("Day Name:%s\n",calendar[i]->dayname);
printf("Date:%d\n",calendar[i]->date);
printf("Activity Description:%s\n",calendar[i]->activitydescription);
printf("\n");
}
}
void freememory(struct Day*calendar[],int size)
{
for(int i=0;i<size;i++)
{
free(calendar[i]->dayname);
free(calendar[i]->activitydescription);
free(calendar[i]);
}
}
int main()
{
struct Day*week[7];
read(week,7);
display(week,7);
freememory(week,7);
return 0;
}

