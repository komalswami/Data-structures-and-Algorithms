    #include<bits/stdc++.h>

    using namespace std;

     

    int knapsack_dp(int n, int M, int w[], int p[])

    {

        int i,j;

     

        //create a matrix to memoize the values using dynamic programming

        int knapsack[n+1][M+1];

     

        //knapsack[i][j] denotes the maximum attainable value of items in knpasack with i available 

        //items and capacity of knapsack being j

     

        //initializing knapsack[0][j]=0 for 0<=j<=M

        //because if there is no item, no value can be attained

        for(j=0;j<=M;j++)

            knapsack[0][j]=0;

     

        //initializing knapsack[i][0]=0 for 0<=i<=n,

        //because in a bag of zero capacity, no item can be placed

        for(i=0;i<=n;i++)

            knapsack[i][0]=0;

     

        //now, filling the matrix in bottom up manner

        for(i=1;i<=n;i++)

        {

            for(j=1;j<=M;j++)

            {

                //check if the weight of current item i is less than or equal to the capacity of sack,

                //take maximum of once including the current item and once not including

                if(w[i-1]<=j)

                {

                    knapsack[i][j]=max(knapsack[i-1][j],p[i-1]+knapsack[i-1][j-w[i-1]]);

                }

     

                //can not include the current item in this case

                else

                {

                    knapsack[i][j]=knapsack[i-1][j];

                }

            }

        }

     

     

        return knapsack[n][M];

     

     

    }

     

    int main()

    {

        int i,j;

        int n;  //number of items

        int M;  //capacity of knapsack

     

        cout<<"Enter the no. of items ";

        cin>>n;

     

        int w[n];  //weight of items

        int p[n];  //value of items

     

        cout<<"Enter the weight and price of all items"<<endl;

        for(i=0;i<n;i++)

        {

            cin>>w[i]>>p[i];

        }

     

        cout<<"enter the capacity of knapsack  ";

        cin>>M;

     

     

        int result=knapsack_dp(n,M,w,p);

     

        //the maximum value will be given by knasack[n][M], ie. using n items with capacity M

        cout<<"The maximum value of items that can be put into knapsack is "<<result;

     

        return 0;

    }