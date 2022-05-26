int main ()
{
int n,i;
    printf("enter number of trains that will be arriving to station\n");
    scanf("%d",&n);
    int arr[n], dep[n];
    printf("enter the arrival timings of the trains\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the departure timings of the trains\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&dep[i]);
    }
    minplatform(arr, dep, n);
}


int minplatform(int arr[], int dep[], int n)
{
    int count=1, max=1,i=1,j=0;
    sortarr(arr, n);
    sortdep(dep, n);
    while(i<n && j<n)
    {
        if(arr[i]<=dep[j])
        {
            i++;count++;
            if(count>max)
                max=count;
        }
        else
        {
            j++; count--;
        }
    }
    printf("The minimum no. of platforms required= %d",max);
}

sortarr(int arr[], int n)
{
    int i,j,temp;

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                 temp=arr[j];
                 arr[j]=arr[j+1];
                 arr[j+1]=temp;
            }

        }

    }
    printf("Ascending order of arrival times\n");
    for(i=0;i<n;i++)
   {
       printf("%d\n",arr[i]);
   }
}

sortdep(int dep[], int n)
{
    int i,j,temp;

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(dep[j]>dep[j+1])
            {
                 temp=dep[j];
                 dep[j]=dep[j+1];
                 dep[j+1]=temp;
            }

        }

    }
    printf("Ascending order of departure times\n");
    for(i=0;i<n;i++)
   {
       printf("%d\n",dep[i]);
   }
}

