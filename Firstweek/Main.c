#include <stdio.h>

int main(void) {
    double revenue, expenses, assets, liabilities;
    double net_income, equity;

    printf("Financial Statements Program\n");
    printf("--------------------------\n");
    printf("Enter revenue: ");
    scanf("%lf", &revenue);
    printf("Enter expenses: ");
    scanf("%lf", &expenses);
    printf("Enter assets: ");
    scanf("%lf", &assets);
    printf("Enter liabilities: ");
    scanf("%lf", &liabilities);

    net_income = revenue - expenses;
    equity = assets - liabilities;

    printf("\nIncome Statement\n");
    printf("Revenue: %.2f\n", revenue);
    printf("Expenses: %.2f\n", expenses);
    printf("Net Income: %.2f\n", net_income);

    printf("\nBalance Sheet\n");
    printf("Assets: %.2f\n", assets);
    printf("Liabilities: %.2f\n", liabilities);
    printf("Equity: %.2f\n", equity);

    return 0;
}
