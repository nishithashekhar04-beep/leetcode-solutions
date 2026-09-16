#include <stdio.h>

int main()
{
    int n, i;
    int prices[100];
    int minPrice, maxProfit = 0;
    
    printf("Enter number of days: ");
    scanf("%d", &n);

    printf("Enter the stock prices: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &prices[i]);
    }

    minPrice = prices[0];

    for(i = 1; i < n; i++)
    {
        if(prices[i] - minPrice > maxProfit)
        {
            maxProfit = prices[i] - minPrice;
        }

        if(prices[i] < minPrice)
        {
            minPrice = prices[i];
        }
    }

    printf("Maximum Profit: %d\n", maxProfit);

    return 0;
}

