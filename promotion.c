// Truncation with Assignment Operators
// truncation.c

int main(void)
{
	double cash;
	int loonies;

	printf("Cash ? ");
	scanf("%lf", &cash);
	loonies = cash; // truncation
	printf("%d loonies.\n", loonies);

	return 0;
}