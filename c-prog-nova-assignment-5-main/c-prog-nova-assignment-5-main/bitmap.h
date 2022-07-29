#include <stddef.h>
#include <string.h>

//Macros
#define MAX_SIZE 20

//Structure
struct LoanApplication
{
unsigned int PersonAge;
unsigned long PersonIncome,LoanAmount;
float LoanInterestRate;
};

typedef struct LoanApplication LoanApp;


//Function Prototypes

float AverageLoanAmount(const LoanApp *parr, int length);
unsigned int MinimumAge(const LoanApp *parr, int length);
unsigned long IncomeForHighestAmount(const LoanApp *parr, int length);
unsigned int HighInterestCount(const LoanApp *ptr, int length);
